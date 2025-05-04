@interface AWEProgressPauseTimeLabelView : UIView
@property (nonatomic) UILabel playTimeLabel;
@property (nonatomic) UILabel totalTimeLabel;
@property (nonatomic) UIImageView middleImageView;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:;
- (id)playTimeLabel;
- (void)setPlayTimeLabel:;
- (void)setMiddleImageView:;
- (void)setupWithPlayedTime:totalTime:;
- (void)updateTimeLabelLayout;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (id)middleImageView;
@end
