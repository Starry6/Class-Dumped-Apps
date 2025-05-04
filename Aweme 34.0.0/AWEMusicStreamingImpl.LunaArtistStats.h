@interface AWEMusicStreamingImpl.LunaArtistStats : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q countCollected;
- (long long)countCollected;
- (void)setCountCollected:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
