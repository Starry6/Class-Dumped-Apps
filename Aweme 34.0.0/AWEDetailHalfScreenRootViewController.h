@interface AWEDetailHalfScreenRootViewController : UIViewController
@property (nonatomic) UIView snapshotView;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) DUXPartialSheet sheet;
@property (nonatomic) double ratio;
- (BOOL)VCIsBeingDismissed;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)setSnapshotView:;
- (id)snapshotView;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (double)ratio;
- (void)setRatio:;
- (id)sheet;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (void)setSheet:;
@end
