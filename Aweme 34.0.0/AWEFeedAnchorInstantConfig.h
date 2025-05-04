@interface AWEFeedAnchorInstantConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) UIView<AWEInstantAnchorProtocol> instantAnchorView;
@property (nonatomic) BOOL isShowSuffix;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)instantAnchorView;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (id)anchorInfoExtra;
- (BOOL)isShowSuffix;
- (void)reportSDKUpdate;
- (void)setInstantAnchorView:;
- (void)setIsShowSuffix:;
- (void)showInstantAnchorTowLine;
- (void)showInstantExtraTagsWithPlayBackTime:;
- (void)showInstantExtraTagsWithLoopTimes:;
- (void).cxx_destruct;
- (void)reset;
- (void)updateTags;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (void)setIsUpdatingAddress:froAwemeMode:;
+ (void)updateAddressWithAwemeModel:completion:;
+ (BOOL)getIsUpdatingAddressWithAwemeModel:;
+ (void)fetchStoreListWithShopId:productId:awemeModel:aweECService:completion:;
+ (void)fetchAnchorInfoWithShopId:storeId:subProductId:awemeModel:isFallback:needAddress:aweECService:completion:;
+ (id)anchorType;
@end
