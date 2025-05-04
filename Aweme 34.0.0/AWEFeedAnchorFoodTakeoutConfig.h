@interface AWEFeedAnchorFoodTakeoutConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) UIView<AWEFoodTakeoutAnchorProtocol> anchorView;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (void)reportSubPidShow;
- (id)anchorInfoExtra;
- (void)handleClickAnchor;
- (void).cxx_destruct;
- (void)reset;
- (id)anchorView;
- (void)setAnchorView:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (void)fetchAnchorInfoWith:updateAnchorInfo:completion:;
+ (void)fetchStoreListWith:completion:;
+ (void)updateAnchorInfoWith:completion:;
+ (id)anchorType;
@end
