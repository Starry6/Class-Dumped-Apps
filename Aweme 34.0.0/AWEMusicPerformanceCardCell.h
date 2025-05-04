@interface AWEMusicPerformanceCardCell : UICollectionViewCell
@property (nonatomic) BDImageView postImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) UILabel locationLabel;
@property (nonatomic) AWEMusicPerformanceModel performanceModel;
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
- (id)locationLabel;
- (void)setLocationLabel:;
+ (double)cellHeight;
@end
