@interface AWESearchAIGCInputAgentVideoRSCell : AWESearchAIGCInputAgentBaseCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView rightSepView;
- (id)rightSepView;
- (void)setRightSepView:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
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
