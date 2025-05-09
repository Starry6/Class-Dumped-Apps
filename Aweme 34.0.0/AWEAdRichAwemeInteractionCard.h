@interface AWEAdRichAwemeInteractionCard : UIView
@property (nonatomic) NSObject<AWEAdRichAwemeInteractionCardViewModel> viewModel;
@property (nonatomic) BOOL fill;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) UIView descriptionLabelHolder;
@property (nonatomic) YYLabel descriptionLabel;
@property (nonatomic) UIButton expandButton;
@property (nonatomic) UIView<AWEAdFeedLearnMoreView> learnMoreView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)learnMoreView;
- (void)setLearnMoreView:;
- (id)attributedTextWithExpanded:;
- (void)setupViewModel:;
- (void)changeExpandButtonTextWithExpanded:;
- (void)animateDescriptionTextWithExpanded:;
- (id)nickNameLabel;
- (id)descriptionLabelHolder;
- (void)addExpandButtonIfNeeded;
- (void)updateSubviewsWithNeedFill:;
- (double)fillModeExpandedHeight;
- (double)fillModeInitHeight;
- (void)resetFromFill;
- (void)setNickNameLabel:;
- (void)setDescriptionLabelHolder:;
- (void)setDescriptionLabel:;
- (id)viewModel;
- (void)setBackgroundView:;
- (id)backgroundView;
- (id)expandButton;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (BOOL)fill;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setExpandButton:;
- (void)setupSubviews;
- (void)setFill:;
- (id)initWithFrame:viewModel:;
@end
