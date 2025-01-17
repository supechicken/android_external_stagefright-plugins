/*
 * Copyright 2022 Michael Goffioul <michael.goffioul@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef C2_FFMPEG_COMPONENT_COMMON_H
#define C2_FFMPEG_COMPONENT_COMMON_H

extern "C" {
#include <libavcodec/avcodec.h>
}

namespace android {

typedef struct {
    const char* name;
    const char* mediaType;
    enum AVCodecID codecID;
} C2FFMPEGComponentInfo;

// Helper datastructures to pass extra information from extractor to codecs

typedef struct {
    int32_t codec_id;
    int32_t bits_per_coded_sample;
    int32_t block_align;
} C2FFMPEGAudioCodecInfo;

typedef struct {
    int32_t codec_id;
} C2FFMPEGVideoCodecInfo;

} // namespace android

#endif // C2_FFMPEG_COMPONENT_COMMON_H
