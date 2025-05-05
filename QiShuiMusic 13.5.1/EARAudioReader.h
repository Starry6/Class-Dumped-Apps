@interface EARAudioReader : NSObject
- (void).cxx_destruct;
- (id)initWithFileURL:sampleRate:;
- (id)enumerateAudioBuffersWithBlock:;
- (id)_avf_enumerateAudioBuffersWithBlock:;
- (id)_opx_enumerateAudioBuffersWithBlock:;
- (id)_opx_enumeratePacketsWithBlock:;
@end
