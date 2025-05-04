@interface AWEPlayInteractionFeedAnchorManager : NSObject
@property (nonatomic) NSObject<AWEFeedAnchorViewManager> anchorViewManager;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorViewManager;
- (BOOL)shouldShowAnchorView;
- (BOOL)shouldShowPoiButton;
- (void)configBookAnchorPlayDelegate:;
- (void)setAnchorViewManager:;
- (void)showShoppingCartExtraTagsWithLoopTimes:;
- (BOOL)shouldShowCommonAnchor;
- (BOOL)shouldShowPrimaryAnchor;
- (void)showLocalLifeAnchorDetail;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
