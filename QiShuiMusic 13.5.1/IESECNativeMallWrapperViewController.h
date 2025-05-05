@interface IESECNativeMallWrapperViewController : UIViewController
@property (nonatomic) IESECMallMainViewController mallMainVC;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} currentFrame;
- (id)mallMainVC;
- (void)setMallMainVC:;
- (void)updateFrame:;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)currentFrame;
- (void)setCurrentFrame:;
@end
