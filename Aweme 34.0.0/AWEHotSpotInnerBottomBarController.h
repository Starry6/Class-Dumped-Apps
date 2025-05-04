@interface AWEHotSpotInnerBottomBarController : NSObject
@property (nonatomic) AWEHotSearchInnerBottomView innerBottomView;
@property (nonatomic) AWEHotSpotInnerBottomBarContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)bottomBarAddedToContainer:;
- (id)innerBottomView;
- (void)setInnerBottomView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;
@end
