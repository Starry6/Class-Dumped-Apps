@interface AWEDiscoverPlayletRecommendButtonView : UIView
@property (nonatomic) AWECodeGenRecommendEntranceModel model;
@property (nonatomic) q currentIndex;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
- (void)configUI;
- (void)setModel:;
- (void)setCurrentIndex:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (long long)currentIndex;
- (void)setIconImageView:;
- (id)currentModel;
- (void)updateModel:;
@end
