@interface AWEIMImageBothIconTextWaterFallCell : AWEIMImageWaterFallCell
@property (nonatomic) UIView infoContainerView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel textLabel;
- (void)configWithItem:;
- (id)infoContainerView;
- (void)setInfoContainerView:;
- (void)p_setupSubUI;
- (void)p_updateSubUIWithItem:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setTextLabel:;
+ (id)identifier;
@end
