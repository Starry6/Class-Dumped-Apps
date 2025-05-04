@interface AWEFeedLLMRecommendSurveyOptionCell : UITableViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel optionLabel;
@property (nonatomic) UIImageView optionSelectedImageView;
@property (nonatomic) BOOL isOptionSelected;
- (BOOL)isOptionSelected;
- (void)setIsOptionSelected:;
- (id)optionLabel;
- (id)optionSelectedImageView;
- (id)optionLabelFont;
- (void)updateWithOptionTitle:;
- (void)updateOptionSelectedStatus:;
- (void)setOptionLabel:;
- (void)setOptionSelectedImageView:;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)reuseIdentifier;
@end
