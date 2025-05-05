@interface AWEIMPushGuideTipsView : UIView
@property (nonatomic) UIView maskView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWEIMPushGuideTipsViewDelegate> delegate;
- (double)labelMaxWidth;
- (void)p_onClickClose;
- (void)p_onClickConfirm;
- (void)p_setupViews;
- (void)p_updateContentHeight;
- (id)maskView;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setMaskView:;
- (id)titleLabel;
- (id)confirmButton;
- (void)setConfirmButton:;
- (id)closeButton;
- (void)setCloseButton:;
@end
