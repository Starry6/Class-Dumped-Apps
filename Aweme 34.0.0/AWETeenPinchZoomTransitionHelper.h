@interface AWETeenPinchZoomTransitionHelper : NSObject
@property (nonatomic) @ contextProvider;
@property (nonatomic) UIViewController<AWETeenPureModePageViewControllerProtocol> pureModePageVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pureModePageVC;
- (void)setPureModePageVC:;
- (void).cxx_destruct;
- (id)contextProvider;
- (void)setContextProvider:;
+ (BOOL)isInPureModePage;
+ (double)scaleThresholdForPatternType:;
+ (BOOL)isPureModePageTransition;
+ (BOOL)shouldStartZoomInTranstionWithAwemeModel:;
+ (BOOL)onlyZoomInWithAwemeModel:;
+ (void)dismissPureModePageWhenResetIfNeeded;
+ (void)changeToAnchorPoint:withoutMovingForView:;
+ (id)tryToGetPureModePageVC;
@end
