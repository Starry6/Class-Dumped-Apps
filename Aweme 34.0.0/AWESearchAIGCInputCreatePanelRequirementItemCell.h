@interface AWESearchAIGCInputCreatePanelRequirementItemCell : UICollectionViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView iconImageView;
- (id)initWithFrame:;
- (id)iconImageView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setNameLabel:;
- (void)updateWithModel:;
+ (BOOL)isDarkStyle;
+ (id)sizeWithModel:;
+ (id)attributedNameStringWithModel:;
+ (id)identifier;
@end
