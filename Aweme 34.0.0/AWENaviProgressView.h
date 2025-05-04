@interface AWENaviProgressView : UIView
@property (nonatomic) @? dismissBlock;
@property (nonatomic) DUXLoadingToast progressBar;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)DUXLoadingToastDidClosed:;
- (void)DUXLoadingToastDidStopAnimating:;
- (void)updateToProgress:duration:;
- (void)updateTip:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setProgressBar:;
- (id)progressBar;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
