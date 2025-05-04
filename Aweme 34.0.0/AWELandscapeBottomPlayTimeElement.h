@interface AWELandscapeBottomPlayTimeElement : AWELandscapeInteractionBaseElement
@property (nonatomic) UIView timeContainer;
@property (nonatomic) UILabel currentTimeLabel;
@property (nonatomic) UILabel lineLabel;
@property (nonatomic) UILabel totalTimeLabel;
@property (nonatomic) double totalTime;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:;
- (id)timeContainer;
- (void)setTimeContainer:;
- (double)totalTime;
- (void)viewDidLoad;
- (id)currentTimeLabel;
- (void)setData:;
- (void)setCurrentTimeLabel:;
- (void).cxx_destruct;
- (void)setTotalTime:;
- (id)lineLabel;
- (void)setLineLabel:;
@end
