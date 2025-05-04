@interface AWEMVChannelPlayerCardDispatchManager : AWEShellControllerManager
@property (nonatomic) BOOL loadBelowControllers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classNameArray;
- (BOOL)shouldFailedGestureRecognizer:;
- (BOOL)shouldResponseGestureRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (void)setLoadBelowControllers:;
- (BOOL)loadBelowControllers;
- (id)classNameArrayBelowBaseUI;
- (id)classNameArrayAboveBaseUI;
- (void)loadBelowBaseUIControllersWithViewController:rootView:withContext:;
- (void)loadAboveBaseUIControllersWithViewController:rootView:withContext:;
@end
