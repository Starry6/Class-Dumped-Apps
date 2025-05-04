@interface AWESearchMusicRecommendedTitleView : UIView
@property (nonatomic) Q type;
@property (nonatomic) UIImageView musicIconView;
@property (nonatomic) UILabel titleLabel;
- (void)configureUI;
- (id)musicIconView;
- (void)setMusicIconView:;
- (unsigned long long)type;
- (void)setType:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)titleLabel;
- (void)updateWithTitle:;
@end
