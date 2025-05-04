@interface AWEIMImageWithIconWaterFallCell : AWEIMImageWaterFallCell
@property (nonatomic) UIImageView iconImageView;
- (void)configWithItem:;
- (void)p_setupSubUI;
- (void)p_updateSubUIWithItem:;
- (void)p_updateIconLayoutWithPosition:size:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
+ (id)identifier;
@end
