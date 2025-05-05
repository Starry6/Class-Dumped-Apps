@interface IESLiveSelfDisciplineFinishView : UIView
@property (nonatomic) UIView timeView;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) double scale;
@property (nonatomic) UIButton timeButton;
@property (nonatomic) UIImageView backgroundView;
@property (nonatomic) NSString selfDisciplineTime;
@property (nonatomic) BOOL didSuccess;
- (BOOL)didSuccess;
- (id)selfDisciplineTime;
- (void)setDidSuccess:;
- (void)setSelfDisciplineTime:;
- (void)setTimeButton:;
- (id)timeButton;
- (void)setTimeLabel:;
- (id)timeLabel;
- (id)backgroundView;
- (void)setTimeView:;
- (void)setScale:;
- (id)initWithFrame:;
- (id)timeView;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (double)scale;
- (void)setupViews;
@end
