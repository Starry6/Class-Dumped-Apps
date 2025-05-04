@interface AWEDanmakuSmartModeGuideViewController : UIViewController
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) @? vcCloseBlock;
- (void)closeButtonClick;
- (void)setVcCloseBlock:;
- (void)setUI;
- (void)configIconImageView;
- (id)vcCloseBlock;
- (void)onClickConfirm;
- (id)init;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (id)confirmButton;
- (id)contentLabel;
- (void)setConfirmButton:;
- (void)setContentLabel:;
- (void)setCloseButton:;
- (id)closeButton;
@end
