/*
 * CLAP - CLever Audio Plugin
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 * Copyright (c) 2014...2022 Alexandre BIQUE <bique.alexandre@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include <clap/entry.h>

#include <clap/factory/plugin-factory.h>
#include <clap/factory/preset-discovery.h>

#include <clap/plugin.h>
#include <clap/plugin-features.h>
#include <clap/host.h>
#include <clap/universal-plugin-id.h>

#include <clap/ext/ambisonic.h>
#include <clap/ext/audio-ports-activation.h>
#include <clap/ext/audio-ports-config.h>
#include <clap/ext/audio-ports.h>
#include <clap/ext/configurable-audio-ports.h>
#include <clap/ext/context-menu.h>
#include <clap/ext/event-registry.h>
#include <clap/ext/gui.h>
#include <clap/ext/latency.h>
#include <clap/ext/log.h>
#include <clap/ext/note-name.h>
#include <clap/ext/note-ports.h>
#include <clap/ext/param-indication.h>
#include <clap/ext/params.h>
#include <clap/ext/posix-fd-support.h>
#include <clap/ext/preset-load.h>
#include <clap/ext/remote-controls.h>
#include <clap/ext/render.h>
#include <clap/ext/state-context.h>
#include <clap/ext/state.h>
#include <clap/ext/surround.h>
#include <clap/ext/tail.h>
#include <clap/ext/thread-check.h>
#include <clap/ext/thread-pool.h>
#include <clap/ext/timer-support.h>
#include <clap/ext/track-info.h>
#include <clap/ext/voice-info.h>
