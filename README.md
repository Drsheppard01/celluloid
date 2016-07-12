# GNOME MPV

GNOME MPV is a simple GTK+ frontend for mpv. GNOME MPV interacts with mpv via
the client API exported by libmpv, allowing access to mpv's powerful playback
capabilities.

![Screenshot](https://gnome-mpv.github.io/images/screenshot-0.png)

## Dependencies

- appstream-glib<sup>[[1]](#note1)</sup> (build)
- autoconf >= 2.69<sup>[[1]](#note1)</sup> (build)
- autoconf-archive<sup>[[1]](#note1)</sup> (build)
- automake >= 1.12<sup>[[1]](#note1)</sup> (build)
- python2<sup>[[1]](#note1)</sup> (build)
- intltool >= 0.40.6 (build)
- pkg-config (build)
- gcc (build)
- glib >= 2.44
- gtk >= 3.18<sup>[[2]](#note2)</sup>
- mpv >= 0.17
- epoxy
- lua (optional)
- youtube-dl (optional)

<a name="note1">[1]</a>: Not required when building from release tarballs

<a name="note2">[2]</a>: Some features may be unavailable with gtk < 3.20

## Installation

### GNU/Linux packages
- Arch Linux: https://aur.archlinux.org/packages/gnome-mpv
- Arch Linux (Git): https://aur.archlinux.org/packages/gnome-mpv-git
- Debian testing: https://packages.debian.org/testing/gnome-mpv
- Debian unstable: https://packages.debian.org/sid/gnome-mpv
- Fedora (russianfedora): http://koji.russianfedora.pro/koji/packageinfo?packageID=155
- Frugalware: http://www4.frugalware.org/pub/linux/distributions/frugalware/frugalware-current/source/xapps-extra/gnome-mpv/
- OpenSUSE: https://build.opensuse.org/package/show/home:mermoldy:multimedia/gnome-mpv
- Gentoo: http://gpo.zugaina.org/media-video/gnome-mpv
- Guix: https://www.gnu.org/software/guix/packages/#gnome-mpv
- Solus: https://packages.solus-project.com/v1/g/gnome-mpv/
- Ubuntu: https://launchpad.net/~xuzhen666/+archive/ubuntu/gnome-mpv

### Flatpak
Flatpak builds can be obtained from https://dl.tingping.se/flatpak/. The build
file is available at
https://github.com/TingPing/flatpak-packages/blob/master/io.github.GnomeMpv.json.

Run the commands below to install:

```sh
wget https://dl.tingping.se/keys/tingping.gpg
flatpak --user remote-add --gpg-import=tingping.gpg tingping https://dl.tingping.se/flatpak/
flatpak --user install tingping io.github.GnomeMpv
```

### Source code
Run the following command in the source code directory to build and install:

```sh
./autogen.sh && make && sudo make install
```

## Usage

### Opening files

There are 4 ways to open files in GNOME MPV.

1. Passing files and/or URIs as command line arguments.
2. Using the file chooser dialog box, accessible via the "Open" menu item.
3. Typing URI into the "Open Location" dialog box, accessible via the
   menu item with the same name.
4. Dragging and dropping files or URIs onto GNOME MPV.

### Manipulating playlist

The playlist is hidden by default. To show the playlist, click the "Playlist"
menu item or press F9. Files can be added by dragging and dropping files or URIs
onto the playlist. Dropping files or URIs onto the video area will replace the
content of the playlist. Playlist files or online playlists (eg. YouTube's
playlist) will be automatically expanded into individual items when loaded.

Items in the playlist can be reordered via drag-and-drop. To remove items from
the playlist, select the item by clicking on it then press the delete button on
your keyboard.

### Configuration

GNOME MPV can be configured using the preferences dialog accessible via the
"Preferences" menu item. Additional configuration options can be set from an
external file using the same syntax as mpv's `mpv.conf`. See mpv's man page for
the full list of options. The file must be specified and enabled in the
preferences dialog under the "MPV Configuration" section.

Options can also be set using the "Extra MPV Options" text box in the
preferences dialog. The syntax used is the same as mpv's command line options.

### Keybindings

GNOME MPV defines a set of keybindings in the macro `DEFAULT_KEYBINDS`, which
can be found in
[src/def.h](https://github.com/gnome-mpv/gnome-mpv/blob/master/src/def.h). The
syntax used is exactly the same as mpv's `input.conf`. These keybindings are
applied on top of default keybindings provided by mpv.

Additional keybindings can be defined in an external file using mpv's
`input.conf` syntax. The file can be set in the preferences dialog under the
"Keybindings" section.

## Contributing Translations

GNOME MPV uses [Zanata](https://zanata.org) to coordinate
translations. You can find GNOME MPV's page
[here](https://translate.zanata.org/zanata/iteration/view/gnome-mpv/master). To
start translating, follow the instructions
[here](http://docs.zanata.org/en/release/user-guide/translator-guide/). If you'd
like to add a new language, open an issue on GitHub.

## License

GNOME MPV is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

GNOME MPV is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNOME MPV.  If not, see <http://www.gnu.org/licenses/>.

