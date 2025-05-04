@interface AWEMusicStreamingImpl.LunaVolumeInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) double loudness;
@property (nonatomic) double peak;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
- (double)loudness;
- (void)setLoudness:;
- (double)peak;
- (void)setPeak:;
+ (id)JSONKeyPathsByPropertyKey;
@end
