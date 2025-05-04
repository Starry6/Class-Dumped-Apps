@interface AWEPoiEmphraseCollectViewBarController : NSObject
@property (nonatomic) UIViewController<AWEPOIEmphraseCollectAnchorViewControllerProtocol> poiEmphraseCollectAnchorViewController;
@property (nonatomic) AWEPoiEmphraseCollectViewBarContext context;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (id)logExtraDict;
- (BOOL)canShowBottomBarForAweme:;
- (void)bottomBarAddedToContainer:;
- (id)poiEmphraseCollectAnchorViewController;
- (void)handleOuterFavoriteActionNotification:;
- (void)setPoiEmphraseCollectAnchorViewController:;
- (void)dealloc;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarFrame;
- (id)bottomBarView;
@end
