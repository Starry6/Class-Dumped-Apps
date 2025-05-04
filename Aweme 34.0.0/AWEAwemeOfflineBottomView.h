@interface AWEAwemeOfflineBottomView : UIView
@property (nonatomic) UIButton settingButton;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) <AWEAwemeOfflineBottomViewDidClickButtonDelegate> delegate;
- (void)updateWithAweme:;
- (void)setSettingButton:;
- (id)settingButton;
- (void)clickEditButton;
- (void)resetLabelText;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)infoLabel;
- (void)setupUI;
- (void)setInfoLabel:;
@end
