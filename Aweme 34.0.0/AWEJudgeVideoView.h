@interface AWEJudgeVideoView : UIView
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIButton cancelButton;
- (id)initWithTitle:actionTitle:cancelTitle:;
- (void)updateAcceptAction:;
- (void)resetButtonStatus;
- (void)setCancelButton:;
- (void)setCancelBlock:;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)setActionBlock:;
- (id)actionButton;
- (id)contentLabel;
- (void)setActionButton:;
- (void)setContentLabel:;
- (void)updateTitle:;
@end
