@interface AWEMusicPlayerMeta : MTLModel
@property (nonatomic) double loudness;
@property (nonatomic) double peak;
- (double)loudness;
- (void)setLoudness:;
- (double)peak;
- (void)setPeak:;
+ (id)metaWithJsonString:;
@end
