@interface AWEMVVolumeStrategyController : AWEDCFeedBaseController
@property (nonatomic) NSNumber volumeHandlerID;
- (void)setVolumeHandlerID:;
- (id)volumeHandlerID;
- (BOOL)getMVChannelMuteState;
- (void)saveMVChannelMuteState:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
