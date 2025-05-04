@interface AWEChallengeDetailHeaderNegativeContentView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIView labelContainer;
@property (nonatomic) UILabel label;
- (void)setupAnimationIfNeeded;
- (void)updateWithContent:;
- (void)setLabel:;
- (id)init;
- (id)intrinsicContentSize;
- (void)setup;
- (id)iconView;
- (id)label;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)labelContainer;
- (void)setLabelContainer:;
@end
