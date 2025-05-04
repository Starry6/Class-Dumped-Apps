@interface AWEMusicStreamingImpl.LunaMyArtistState : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q followStatus;
- (long long)followStatus;
- (void)setFollowStatus:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
