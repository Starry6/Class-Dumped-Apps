@interface AWEPadTabBarControllerAdapter : NSObject
@property (nonatomic) BOOL enableRotateHMDInfo;
@property (nonatomic) <AWEPadSplitScreenStatusDelegate> splitScreenDelegate;
@property (nonatomic) double tabBarRightOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awe_tabBarDidlayoutSubviews;
- (void)awe_tabBarWilllayoutSubviews;
- (void)awe_viewWillTransitionToSize:withTransitionCoordinator:;
- (double)tabBarRightOffset;
- (void)setTabBarRightOffset:;
- (id)splitScreenDelegate;
- (BOOL)enableRotateHMDInfo;
- (id)showTypeWithWindowWidth:windowHeight:;
- (void)setSplitScreenDelegate:;
- (void)setEnableRotateHMDInfo:;
- (id)init;
- (void).cxx_destruct;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (id)GetAdapter;
+ (id)sharedInstance;
@end
