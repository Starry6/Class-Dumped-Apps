@interface AWESmartFeedResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber updateItemCount;
@property (nonatomic) NSNumber updateRoomCount;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber level;
@property (nonatomic) NSNumber reRankType;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray cardList;
@property (nonatomic) AWESmartFeedLastViewModel lastView;
@property (nonatomic) BOOL shouldUseSnapShot;
@property (nonatomic) BOOL shouldDeleteSnapShot;
@property (nonatomic) BOOL shouldChangeSnapShot;
@property (nonatomic) NSNumber updatedItemsCount;
@property (nonatomic) NSString blankPanelText;
@property (nonatomic) BOOL isRecommendFlow;
@property (nonatomic) NSNumber alreadyLastView;
@property (nonatomic) NSNumber refreshCacheTimeout;
@property (nonatomic) BOOL useBackup;
@property (nonatomic) NSString mockInfoFilteredText;
- (id)cardList;
- (BOOL)useBackup;
- (void)setUseBackup:;
- (void)setCardList:;
- (id)reRankType;
- (void)setReRankType:;
- (id)lastView;
- (void)setLastView:;
- (BOOL)shouldUseSnapShot;
- (void)setShouldUseSnapShot:;
- (BOOL)shouldDeleteSnapShot;
- (void)setShouldDeleteSnapShot:;
- (BOOL)shouldChangeSnapShot;
- (void)setShouldChangeSnapShot:;
- (id)updatedItemsCount;
- (void)setUpdatedItemsCount:;
- (id)blankPanelText;
- (void)setBlankPanelText:;
- (BOOL)isRecommendFlow;
- (void)setIsRecommendFlow:;
- (id)alreadyLastView;
- (void)setAlreadyLastView:;
- (id)refreshCacheTimeout;
- (void)setRefreshCacheTimeout:;
- (id)mockInfoFilteredText;
- (void)setMockInfoFilteredText:;
- (id)updateItemCount;
- (id)updateRoomCount;
- (void)setUpdateItemCount:;
- (void)setUpdateRoomCount:;
- (void)setLevel:;
- (id)cursor;
- (id)level;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)lastViewJSONTransformer;
+ (id)followFeed_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;
@end
