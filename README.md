# Ulf Liebal Homepage

visit https://uliebal.github.io.

Many thanks to [minimal-mistakes](https://github.com/mmistakes/minimal-mistakes) for the template!

run in terminal with
> bundle exec jekyll serve

converting mp3 to mp4 with associated jpg 
https://unix.stackexchange.com/questions/657519/how-to-convert-output-mp3-to-mp4-with-ffmpeg
>ffmpeg -loop 1 -i RoundColors_22.jpg -i Tango8.mp3 -vf "scale=1920:1080:force_original_aspect_ratio=decrease,pad=1920:1080:-1:-1:color=black,setsar=1,format=yuv420p" -shortest output.mp4

For automatic deployment, set the repository's Pages source to **GitHub Actions** in
**Settings → Pages → Build and deployment**. The `pages.yml` workflow builds and deploys the site.
