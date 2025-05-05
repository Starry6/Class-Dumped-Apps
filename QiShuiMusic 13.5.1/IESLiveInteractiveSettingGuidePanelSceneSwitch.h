@interface IESLiveInteractiveSettingGuidePanelSceneSwitch : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? tapBlock;
@property (nonatomic) BOOL isSelected;
- (void)setTapBlock:;
- (void)setupGuesture;
- (id)tapBlock;
- (id)backgroundView;
- (void)setTitleLabel:;
- (id)containerView;
- (id)initWithConfig:;
- (void)setContainerView:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)setIsSelected:;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupViews;
@end
