@interface AWERiskControlManager : NSObject
@property (nonatomic) BOOL showing;
@property (nonatomic) UIWindow lastKeyWindow;
@property (nonatomic) UIViewController curPresentVC;
@property (nonatomic) UIWindow curWindow;
- (id)lastKeyWindow;
- (void)setLastKeyWindow:;
- (void)verifyWithType:traceURL:completion:;
- (Class)classForRiskControlType:;
- (void)setCurPresentVC:;
- (void)setCurWindow:;
- (id)curPresentVC;
- (id)curWindow;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (void)setShowing:;
- (void)dismiss:;
+ (id)sharedInstance;
@end
