@interface AWEMusicPerformanceCardView : UIView
@property (nonatomic) AWEMusicPerformanceModel performanceModel;
@property (nonatomic) BDImageView postImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel timeLabel;
- (id)performanceModel;
- (void)setPerformanceModel:;
- (id)postImageView;
- (void)updateWithPerformanceModel:;
- (void)setPostImageView:;
- (void)setTimeLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (id)titleLabel;
- (void)setupSubviews;
@end
