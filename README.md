# Raspberry Pi Auto Restart
If your Pi lies dormant this will ensure it powers up again

# See video #122 at https://www.youtube.com/ralphbacon  
(Direct link to video: https://youtu.be/9IWn5GYktUo)

So I'm adding UPS (Uninterruptable Power Supply) capability to my Raspberry Pi Model 3B+ but have hit a bit of a snag.

The (cheap) module I want has a "problem" inasmuch that should the Pi run on battery for a long time and exhaust it, then when the power comes back the Pi will not restart.

The solution (so far) is to create a simple plug in standalone module to detect that the Pi is not running (but should be) and give it a nudge so it fires up again.

It all works very well (without the UPS power pack) as this video shows. Whether it continues to work with the UPS is another matter and a matter for a future video as I don't actually have the UPS module in my hands yet. This is all about preparation!

# LINKS
The circuit diagram and partial schematics are in this Github as separate files.  
Link to (partial) schematics: https://www.raspberrypi.org/documentation/hardware/raspberrypi/schematics/rpi_SCH_3bplus_1p0_reduced.pdf  

The Banggood supplied item we will endeavour to implement next video  
**Geekworm Power Pack Pro V1.1 Lithium Battery Power Source UPS HAT**  
https://www.banggood.com/Geekworm-Power-Pack-Pro-V1_1-Lithium-Battery-Power-Source-UPS-HAT-Expansion-Board-For-Raspberry-Pi-p-1205973.html?p=FQ040729393382015118&utm_campaign=25129675&utm_content=3312  
(This is an affiliate link - if you click it and order the item within 14 days I get a tiny commission!)

Tinkerkman website, regarding this exact UPS pack. He made me think it was OK to use a Tiny85 as the solution rather than a bunch of discrete transistors, logic gates and the like.  
http://tinkerman.cat/geekworm-power-pack-hat-hack/#lightbox-gallery-MVLP8JIF/2/

If you like this video please give it a thumbs up, share it and if you're not already subscribed please consider doing so :)

**My channel and blog are here:**  
------------------------------------------------------------------  
https://www.youtube.com/RalphBacon  
https://ralphbacon.blog  
------------------------------------------------------------------ 
