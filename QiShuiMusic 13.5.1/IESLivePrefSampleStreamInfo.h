@interface IESLivePrefSampleStreamInfo : NSObject
@property (nonatomic) Q cap_fps;
@property (nonatomic) NSString cap_preset;
@property (nonatomic) NSNumber encode_fps;
@property (nonatomic) NSNumber preview_fps;
@property (nonatomic) NSNumber real_fps;
@property (nonatomic) NSNumber in_cap_fps;
@property (nonatomic) NSNumber out_cap_fps;
@property (nonatomic) NSDictionary extraInfo;
- (void)setOut_cap_fps:;
- (void)setPreview_fps:;
- (unsigned long long)cap_fps;
- (id)cap_preset;
- (id)encode_fps;
- (id)in_cap_fps;
- (id)out_cap_fps;
- (id)preview_fps;
- (id)real_fps;
- (void)setCap_fps:;
- (void)setCap_preset:;
- (void)setEncode_fps:;
- (void)setExtraInfo:;
- (void)setIn_cap_fps:;
- (void)setReal_fps:;
- (void).cxx_destruct;
- (id)extraInfo;
@end
