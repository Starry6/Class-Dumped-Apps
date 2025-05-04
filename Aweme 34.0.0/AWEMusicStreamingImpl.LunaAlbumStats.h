@interface AWEMusicStreamingImpl.LunaAlbumStats : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q collectedCount;
@property (nonatomic) q sharedCount;
@property (nonatomic) q totalPurchCount;
@property (nonatomic) q onlySubscriberPlayableCount;
- (long long)collectedCount;
- (void)setCollectedCount:;
- (long long)sharedCount;
- (void)setSharedCount:;
- (long long)totalPurchCount;
- (void)setTotalPurchCount:;
- (long long)onlySubscriberPlayableCount;
- (void)setOnlySubscriberPlayableCount:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
