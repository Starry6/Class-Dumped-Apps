@interface AWEHotMusicChartInfoView : UIView
@property (nonatomic) UILabel hotMusicChartLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel musicNameLabel;
@property (nonatomic) UIImageView arrowView;
- (void)clickView;
- (void)setupAction;
- (id)hotMusicChartLabel;
- (id)musicNameLabel;
- (void)updateMusicInfoViewWithMusicName:;
- (void)setHotMusicChartLabel:;
- (void)setMusicNameLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)arrowView;
- (id)lineView;
- (void)setArrowView:;
- (void)setLineView:;
- (void)setupUI;
@end
