@interface AWEChallengeDetailDescIconButton : UIView
@property (nonatomic) YYLabel textLabel;
@property (nonatomic) UIImageView icon;
@property (nonatomic) double recommendWidth;
- (void)setRecommendWidth:;
- (double)recommendWidth;
- (void)bindText:andIcon:;
- (void)bindMixDescText:;
- (id)textLabel;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextLabel:;
@end
