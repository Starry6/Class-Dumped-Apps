@interface IESLiveSelfDisciplineTimerView : IESLiveButton
@property (nonatomic) double scale;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) IESLiveSelfDisciplineTimerViewModel viewModel;
@property (nonatomic) IESLiveImageView icon;
@property (nonatomic) Q timeState;
- (void)bindViewModel;
- (id)initWithFrame:scale:viewModel:;
- (void)onClicked;
- (void)setTimeState:;
- (unsigned long long)timeState;
- (void)updateViewModel:;
- (void)setTimeLabel:;
- (id)timeLabel;
- (id)viewModel;
- (id)intrinsicContentSize;
- (void)setScale:;
- (id)icon;
- (void)updateState:;
- (void)setIcon:;
- (void).cxx_destruct;
- (double)scale;
- (void)setViewModel:;
- (void)setupViews;
@end
