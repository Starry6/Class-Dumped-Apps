@interface AWESearchPromotionRollingSalesView : AWESearchLinearGradientView
@property (nonatomic) UIView avatarContainerView;
@property (nonatomic) DUXBaseLabel textLabel;
@property (nonatomic) UIView numbersContainerView;
@property (nonatomic) NSArray avatars;
@property (nonatomic) NSString numberString;
@property (nonatomic) NSString labelText;
@property (nonatomic) NSMutableArray numScrollViewCache;
- (void)configUI;
- (void)setAvatars:;
- (id)numbersContainerView;
- (void)setNumberString:;
- (id)numScrollViewCache;
- (id)numberString;
- (id)dequeueScrollView;
- (void)startAnimation:beginT:;
- (void)setNumbersContainerView:;
- (void)setNumScrollViewCache:;
- (id)textLabel;
- (id)labelText;
- (id)initWithFrame:;
- (void)setLabelText:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (id)avatarContainerView;
- (void)setAvatarContainerView:;
- (void)updateWithModel:;
- (id)avatars;
@end
