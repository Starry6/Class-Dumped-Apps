@interface SFUnifiedTabBarItemViewRegistration : NSObject
- (void).cxx_destruct;
- (id)initWithViewProvider:configurationHandler:;
- (id)dequeueOrCreateViewForItem:isPreview:;
- (id)createItemView;
- (void)enqueueItemView:;
- (void)configureView:forItem:inArrangement:isPreview:;
@end
