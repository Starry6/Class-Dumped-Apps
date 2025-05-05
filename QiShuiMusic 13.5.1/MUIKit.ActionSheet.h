@interface MUIKit.ActionSheet : UIViewController
@property (nonatomic) BOOL awe_shouldBypassPresentationHook;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)contentViewPan:;
- (void)awe_setShouldBypassPresentationHook:;
- (BOOL)awe_shouldBypassPresentationHook;
- (void)touchesBegan:withEvent:;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
