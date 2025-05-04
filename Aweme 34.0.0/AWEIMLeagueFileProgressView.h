@interface AWEIMLeagueFileProgressView : UIView
@property (nonatomic) UIProgressView progress;
@property (nonatomic) UILabel progressLabel;
- (void)addViewConstraints;
- (id)init;
- (id)progress;
- (void).cxx_destruct;
- (void)setProgress:;
- (void)updateWithProgress:;
- (void)setupUI;
- (id)progressLabel;
- (void)setProgressLabel:;
@end
