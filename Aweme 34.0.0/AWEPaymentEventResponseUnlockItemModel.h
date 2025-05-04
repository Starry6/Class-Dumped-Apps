@interface AWEPaymentEventResponseUnlockItemModel : AWEBaseApiModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString contentID;
@property (nonatomic) q episodeRank;
@property (nonatomic) Q videoType;
- (long long)episodeRank;
- (void)setEpisodeRank:;
- (id)itemID;
- (void)setItemID:;
- (unsigned long long)videoType;
- (id)contentID;
- (void).cxx_destruct;
- (void)setVideoType:;
- (void)setContentID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
