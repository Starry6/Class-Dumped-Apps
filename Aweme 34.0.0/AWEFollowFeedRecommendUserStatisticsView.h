@interface AWEFollowFeedRecommendUserStatisticsView : UIView
@property (nonatomic) UILabel diggLabel;
@property (nonatomic) UILabel diggNumberLabel;
@property (nonatomic) UILabel fansLabel;
@property (nonatomic) UILabel fansNumberLabel;
- (id)fansLabel;
- (void)setFansLabel:;
- (id)diggNumberLabel;
- (id)fansNumberLabel;
- (id)diggLabel;
- (void)setDiggLabel:;
- (void)setDiggNumberLabel:;
- (void)setFansNumberLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
