@interface AWESearchAIGCInputAgentCell : AWESearchAIGCInputAgentBaseCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel nameLabel;
- (id)initWithFrame:;
- (id)iconImageView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setNameLabel:;
- (void)setupUI;
- (void)updateWithModel:;
+ (id)sizeWithModel:;
+ (id)nameLabelFont;
@end
