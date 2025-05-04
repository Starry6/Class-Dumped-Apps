@interface AWERelatedVideoPlayLeftBackElement : AWERelatedVideoPlayBaseElement
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIView accessibilityControlView;
- (void)initializeElement;
- (void)setHide:;
- (void)bindEvent;
- (void)voiceOverStatusChange;
- (void)addAccessibilityControlViewIfNeed;
- (id)accessibilityControlView;
- (void)setAccessibilityControlView:;
- (id)backButton;
- (void)viewDidLoad;
- (void)setBackButton:;
- (void).cxx_destruct;
@end
