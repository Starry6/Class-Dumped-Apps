@interface AWEMVChannelPlayerCardPlayingTipElement : AWEMVChannelPlayerCardBaseElement
@property (nonatomic) UILabel tipLabel;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
@end
