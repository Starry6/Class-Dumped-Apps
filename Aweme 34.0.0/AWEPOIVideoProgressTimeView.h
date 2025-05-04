@interface AWEPOIVideoProgressTimeView : UIView
@property (nonatomic) UILabel progressLeftLabel;
@property (nonatomic) UILabel progressCenterLabel;
@property (nonatomic) UILabel progressRightLabel;
- (id)progressLeftLabel;
- (id)progressRightLabel;
- (void)setProgressLeftLabel:;
- (void)setProgressRightLabel:;
- (void)updateCurrentTime:totalTime:;
- (void)adjustLayout;
- (id)progressCenterLabel;
- (id)formatStringTime:;
- (void)setProgressCenterLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
