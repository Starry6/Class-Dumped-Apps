@interface AWEWebViewAppearanceStateUpdater : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) @? viewWillAppear;
@property (nonatomic) @? viewDidAppear;
@property (nonatomic) @? viewWillDisappear;
@property (nonatomic) @? viewDidDisappear;
- (void)onViewWillAppear:;
- (void)onViewDidAppear:;
- (void)onViewWillDisppear:;
- (void)onViewDidDisappear:;
- (id)initWithViewController:;
- (id)viewController;
- (id)viewWillAppear;
- (void).cxx_destruct;
- (id)viewDidAppear;
- (void)setViewController:;
- (id)viewDidDisappear;
- (id)viewWillDisappear;
- (void)setViewDidAppear:;
- (void)setViewDidDisappear:;
- (void)setViewWillAppear:;
- (void)setViewWillDisappear:;
@end
