@interface AWEECBottomPopupView : UIView
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) AWEECBottomPopupAction setting;
@property (nonatomic) UIImage image;
@property (nonatomic) NSArray actions;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIImageView headerImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel settingLabel;
@property (nonatomic) NSMutableArray actionButtons;
@property (nonatomic) UIView buttonsContainerView;
@property (nonatomic) BOOL isButtonAlignedVertically;
- (BOOL)isButtonAlignedVertically;
- (void)setIsButtonAlignedVertically:;
- (id)settingLabel;
- (id)buttonsContainerView;
- (void)settingLabelClicked:;
- (void)setSettingLabel:;
- (void)setButtonsContainerView:;
- (id)content;
- (id)image;
- (void)_dismiss;
- (void)setImage:;
- (id)actionButtons;
- (void)setActionButtons:;
- (id)actions;
- (id)contentView;
- (void)setContent:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)title;
- (id)titleLabel;
- (void)setActions:;
- (void)setTitle:;
- (void)_show;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)setting;
- (void)setSetting:;
- (id)headerImageView;
- (void)setHeaderImageView:;
- (void)_setupUI;
+ (void)showWithTitle:description:setting:headerImage:actions:;
@end
