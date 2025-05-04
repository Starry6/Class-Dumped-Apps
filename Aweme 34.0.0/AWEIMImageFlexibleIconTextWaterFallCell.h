@interface AWEIMImageFlexibleIconTextWaterFallCell : AWEIMImageWaterFallCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel textLabel;
- (void)configWithItem:;
- (void)p_setupSubUI;
- (void)p_updateSubUIWithItem:;
- (void)p_updateLayoutWithSubview:position:height:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setTextLabel:;
+ (id)identifier;
@end
