@interface AWEIMSecurityToastConfigAudioModel : AWEBaseApiModel
@property (nonatomic) q audioDurationInMilliseconds;
@property (nonatomic) NSString audioText;
@property (nonatomic) NSString audioUrl;
@property (nonatomic) NSData audioData;
- (id)audioUrl;
- (void)setAudioUrl:;
- (id)audioText;
- (void)setAudioText:;
- (long long)audioDurationInMilliseconds;
- (BOOL)hasAudioUrl;
- (void)requestAudioDataIfNeeded:;
- (void)setAudioDurationInMilliseconds:;
- (void).cxx_destruct;
- (id)audioData;
- (void)setAudioData:;
- (BOOL)hasAudioData;
+ (id)JSONKeyPathsByPropertyKey;
@end
