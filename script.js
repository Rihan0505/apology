const start =
    document.getElementById("start");

const begin =
    document.getElementById("begin");

const world =
    document.getElementById("world");

const stars =
    document.getElementById("stars");

const eyebrow =
    document.getElementById("eyebrow");

const title =
    document.getElementById("title");

const line =
    document.getElementById("line");

const message =
    document.getElementById("message");

const final =
    document.getElementById("final");

const finalMessage =
    document.getElementById("finalMessage");

const mouseLight =
    document.getElementById("mouseLight");


/* =====================================
   CREATE STARS
===================================== */

for(let i=0;i<220;i++){

    const star =
        document.createElement("div");

    star.className =
        "star";

    star.style.left =
        Math.random()*100+"%";

    star.style.top =
        Math.random()*85+"%";

    const size =
        Math.random()*2+.6;

    star.style.width =
        size+"px";

    star.style.height =
        size+"px";

    star.style.animationDelay =
        Math.random()*5+"s";

    star.style.animationDuration =
        2.5+Math.random()*4+"s";

    stars.appendChild(star);
}


/* =====================================
   GOLD DUST
===================================== */

function dust(){

    const d =
        document.createElement("div");

    d.className =
        "dust";

    d.style.position =
        "absolute";

    d.style.width =
        "3px";

    d.style.height =
        "3px";

    d.style.borderRadius =
        "50%";

    d.style.background =
        "#d9b66c";

    d.style.boxShadow =
        "0 0 8px #d9b66c";

    d.style.left =
        Math.random()*100+"%";

    d.style.top =
        55+Math.random()*45+"%";

    d.style.setProperty(
        "--drift",
        Math.random()*180-90+"px"
    );

    d.style.animation =
        "dustRise 7s linear forwards";

    document.body.appendChild(d);

    setTimeout(()=>{
        d.remove();
    },8000);
}


/* =====================================
   PETALS
===================================== */

function petal(){

    const p =
        document.createElement("div");

    p.className =
        "petal";

    p.innerHTML =
        Math.random()>.5
        ? "✦"
        : "❈";

    p.style.position =
        "absolute";

    p.style.top =
        "-30px";

    p.style.left =
        Math.random()*100+"%";

    p.style.color =
        "#d4b477";

    p.style.opacity =
        ".55";

    p.style.fontSize =
        "18px";

    p.style.setProperty(
        "--drift",
        Math.random()*240-120+"px"
    );

    p.style.animation =
        "petalFall 11s linear forwards";

    document.body.appendChild(p);

    setTimeout(()=>{
        p.remove();
    },12000);
}


/* =====================================
   SHOOTING STARS
===================================== */

function shootingStar(){

    const s =
        document.createElement("div");

    s.style.position =
        "absolute";

    s.style.width =
        "120px";

    s.style.height =
        "1px";

    s.style.background =
        "linear-gradient(90deg,transparent,#ffe9b6,transparent)";

    s.style.left =
        Math.random()*70+"%";

    s.style.top =
        Math.random()*35+"%";

    s.style.transform =
        "rotate(-30deg)";

    s.style.animation =
        "shooting 2.5s linear forwards";

    document.body.appendChild(s);

    setTimeout(()=>{
        s.remove();
    },2600);
}


/* =====================================
   EXTRA ANIMATIONS
===================================== */

const extraStyle =
    document.createElement("style");

extraStyle.innerHTML = `

@keyframes dustRise{

    0%{
        transform:
            translateY(30px)
            scale(.3);

        opacity:0;
    }

    20%{
        opacity:.8;
    }

    100%{
        transform:
            translate(
                var(--drift),
                -220px
            )
            scale(1);

        opacity:0;
    }
}

@keyframes petalFall{

    0%{
        transform:
            translateY(-30px)
            rotate(0deg);

        opacity:0;
    }

    15%{
        opacity:.7;
    }

    100%{
        transform:
            translate(
                var(--drift),
                115vh
            )
            rotate(540deg);

        opacity:0;
    }
}

@keyframes shooting{

    0%{
        transform:
            translate(-100px,-80px)
            rotate(-30deg);

        opacity:0;
    }

    15%{
        opacity:1;
    }

    100%{
        transform:
            translate(500px,300px)
            rotate(-30deg);

        opacity:0;
    }
}

`;

document.head.appendChild(
    extraStyle
);


/* =====================================
   CINEMATIC SOUND
===================================== */

let audio = null;

let master = null;

let soundStarted = false;


function startSound(){

    if(soundStarted)
        return;

    soundStarted = true;

    const AudioContext =
        window.AudioContext ||
        window.webkitAudioContext;

    if(!AudioContext)
        return;

    audio =
        new AudioContext();

    master =
        audio.createGain();

    master.gain.value =
        0.025;

    master.connect(
        audio.destination
    );


    /*
       SOFT PAD
    */

    const notes = [
        261.63,
        329.63,
        392.00,
        523.25
    ];


    notes.forEach(
        (frequency,index)=>{

            const oscillator =
                audio.createOscillator();

            const gain =
                audio.createGain();

            oscillator.type =
                "sine";

            oscillator.frequency.value =
                frequency;

            gain.gain.value =
                0.12;

            oscillator.connect(gain);

            gain.connect(master);

            oscillator.start();

        }
    );


    /*
       GENTLE CHIMES
    */

    function chime(){

        if(!audio)
            return;

        const oscillator =
            audio.createOscillator();

        const gain =
            audio.createGain();

        const notes = [
            523.25,
            659.25,
            783.99,
            1046.50
        ];

        oscillator.type =
            "sine";

        oscillator.frequency.value =
            notes[
                Math.floor(
                    Math.random()*
                    notes.length
                )
            ];

        const now =
            audio.currentTime;

        gain.gain.setValueAtTime(
            .0001,
            now
        );

        gain.gain.exponentialRampToValueAtTime(
            .06,
            now+.1
        );

        gain.gain.exponentialRampToValueAtTime(
            .0001,
            now+3
        );

        oscillator.connect(gain);

        gain.connect(master);

        oscillator.start(now);

        oscillator.stop(now+3);
    }


    setInterval(
        chime,
        4200
    );
}


/* =====================================
   RESET STORY
===================================== */

function resetStory(){

    eyebrow.classList.remove(
        "appear"
    );

    title.classList.remove(
        "appear"
    );

    line.classList.remove(
        "lineAppear"
    );

    message.classList.remove(
        "appear"
    );

    void title.offsetWidth;
}


/* =====================================
   BEGIN
===================================== */

begin.addEventListener(
    "click",
    async()=>{

        /*
           SOUND STARTS AFTER CLICK.
           This avoids browser autoplay blocking.
        */

        startSound();

        if(audio){

            try{

                await audio.resume();

            }
            catch(error){

                console.log(error);

            }
        }


        /* OPEN CINEMATIC */

        start.classList.add(
            "hide"
        );

        world.style.transform =
            "scale(1.08)";


        /* ATMOSPHERE */

        setInterval(
            dust,
            280
        );

        setInterval(
            petal,
            900
        );

        setInterval(
            shootingStar,
            6500
        );


        /* =================================
           0 - 8 SECONDS
        ================================= */

        setTimeout(()=>{

            eyebrow.classList.add(
                "appear"
            );

        },700);


        setTimeout(()=>{

            title.classList.add(
                "appear"
            );

        },1300);


        setTimeout(()=>{

            line.classList.add(
                "lineAppear"
            );

        },2100);


        setTimeout(()=>{

            message.innerHTML =
                "I know I made a mistake.";

            message.classList.add(
                "appear"
            );

        },2600);


        /* =================================
           9 - 17 SECONDS
        ================================= */

        setTimeout(()=>{

            resetStory();

            setTimeout(()=>{

                eyebrow.classList.add(
                    "appear"
                );

                title.innerHTML =
                    "I never meant to hurt you.";

                title.classList.add(
                    "appear"
                );

                line.classList.add(
                    "lineAppear"
                );

                message.innerHTML =
                    "I'm truly sorry.";

                message.classList.add(
                    "appear"
                );

            },500);

        },9000);


        /* =================================
           18 - 25 SECONDS
        ================================= */

        setTimeout(()=>{

            resetStory();

            setTimeout(()=>{

                eyebrow.classList.add(
                    "appear"
                );

                title.innerHTML =
                    "No excuses.";

                title.classList.add(
                    "appear"
                );

                line.classList.add(
                    "lineAppear"
                );

                message.innerHTML =
                    "Just a sincere apology.";

                message.classList.add(
                    "appear"
                );

            },500);

        },18000);


        /* =================================
           26 SECONDS
           FINAL SCENE
        ================================= */

        setTimeout(()=>{

            final.classList.add(
                "show"
            );


            /*
               Let the title breathe
               before showing the message.
            */

            setTimeout(()=>{

                finalMessage.innerHTML = `

                    Tumarich naa jaan... 🥺❤️

                    <br><br>

                    My ab tumhare bina nahi...

                    <br>

                    Tum itna jaldi mera
                    saath chhod deti kya jaanu?

                    <br><br>

                    Maaf kar dalo naa jaan...
                    please forgive me 🥺🙏🏻🥺

                    <br>

                    Tumarich naa jaan...
                    my...

                    <br>

                    Ab tumhe nahi toh
                    kaun maaf karega,
                    manje boloo princess...

                    <br><br>

                    Please...
                    meri princess. 🙏🏻🥺❤️
                `;

                finalMessage.classList.add(
                    "visible"
                );

            },1800);


        },26000);

    }
);


/* =====================================
   MOUSE PARALLAX
===================================== */

document.addEventListener(
    "mousemove",
    (e)=>{

        const x =
            e.clientX /
            window.innerWidth;

        const y =
            e.clientY /
            window.innerHeight;

        const moveX =
            (x-.5)*18;

        const moveY =
            (y-.5)*10;

        world.style.transform =
            `
            scale(1.08)
            translate(
                ${moveX}px,
                ${moveY}px
            )
            `;


        mouseLight.style.left =
            e.clientX+"px";

        mouseLight.style.top =
            e.clientY+"px";

    }
);


/* =====================================
   TOUCH
===================================== */

document.addEventListener(
    "touchmove",
    (e)=>{

        const touch =
            e.touches[0];

        if(!touch)
            return;

        mouseLight.style.left =
            touch.clientX+"px";

        mouseLight.style.top =
            touch.clientY+"px";

    },
    {
        passive:true
    }
);