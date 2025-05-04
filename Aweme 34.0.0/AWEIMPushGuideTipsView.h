@interface AWEIMPushGuideTipsView : UIView
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) <AWEIMPushGuideTipsViewDelegate> delegate;
- (void)refreshBackgroundColorWhileHasBackground:;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)p_setupViews;
- (void)p_onClickConfirm;
- (void)p_updateContentHeight;
- (void)p_onClickClose;
- (id)delegate;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)setCloseButton:;
- (id)closeButton;
- (double)labelMaxWidth;
@end
