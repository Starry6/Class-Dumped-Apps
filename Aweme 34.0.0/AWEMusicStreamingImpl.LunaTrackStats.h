@interface AWEMusicStreamingImpl.LunaTrackStats : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q collectedCount;
@property (nonatomic) q commentCount;
@property (nonatomic) q playedCount;
@property (nonatomic) q sharedCount;
- (long long)collectedCount;
- (void)setCollectedCount:;
- (long long)sharedCount;
- (void)setSharedCount:;
- (long long)playedCount;
- (void)setPlayedCount:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
- (long long)commentCount;
- (void)setCommentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
