@interface AWENewVideoCoverEditViewController : AWENewCoverEditViewController
@property (nonatomic) BOOL cutRatioVertical;
- (BOOL)cutRatioVertical;
- (void)setCutRatioVertical:;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;
@end
