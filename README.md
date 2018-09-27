# Raspberry Pi Auto Restart
If your Pi lies dormant this will ensure it powers up again

# See video #122 at https://www.youtube.com/ralphbacon  
(Direct link to video: )

So I'm adding UPS (Uninterruptable Power Supply) capability to my Raspberry Pi Model 3B+ but have hit a bit of a snag.

The (cheap) module I want has a "problem" inasmuch that should the Pi run on battery for a long time and exhaust it, then when the power comes back the Pi will not restart.

The solution (so far) is to create a simple plug in standalone module to detect that the Pi is not running (but should be) and give it a nudge so it fires up again.

It all works very well (without the UPS power pack) as this video shows. Whether it continues to work with the UPS is another matter and a matter for a future video as I don't actually have the UPS module in my hands yet. This is all about preparation!

# LINKS
The circuit diagram and partial schematics are in this Github as separate files.

The Banggood supplied item we will endeavour to implement next video  
**Geekworm Power Pack Pro V1.1 Lithium Battery Power Source UPS HAT**  
https://ban.ggood.vip/42np (This is an affiliate link)

Tinkerkman website, regarding this exact UPS pack. He made me think it was OK to use a Tiny85 as the solution rather than a bunch of discrete transistors, logic gates and the like.  
http://tinkerman.cat/geekworm-power-pack-hat-hack/#lightbox-gallery-MVLP8JIF/2/
