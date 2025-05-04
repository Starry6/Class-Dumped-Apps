@interface AWEProgressPlayBackSlider : UIView
@property (nonatomic) UIView playedView;
@property (nonatomic) UIView lineView;
@property (nonatomic) double progress;
- (id)playedView;
- (void)setPlayedView:;
- (void)updatePlayTime:totalTime:animated:animatedDuration:;
- (void)setupCornerRadis;
- (id)initWithFrame:;
- (double)progress;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
+ (long long)progressSmallerWhenDragSolution;
@end
