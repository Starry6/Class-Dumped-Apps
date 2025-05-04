@interface AWEUserProtocolPopView : UIView
@property (nonatomic) UIView customMaskView;
@property (nonatomic) AWEUserProtocolPopContentView contentView;
@property (nonatomic) AWEUserProtocolPopViewModel model;
@property (nonatomic) @? callBack;
- (void)trackShow;
- (void)setCallBack:;
- (id)customMaskView;
- (void)setCustomMaskView:;
- (void)trackClickWithAction:;
- (void)clickAgreeButton:;
- (void)clickDisagreeButton:;
- (void)showInView:completion:;
- (void)setModel:;
- (id)initWithModel:;
- (id)contentView;
- (id)model;
- (void)dismissWithCompletion:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
- (void)updateWithModel:;
- (id)callBack;
@end
