@interface AWELivePreStreamMultiLinkerElement : AWELiveBaseElement
@property (nonatomic) <IESLiveMultiLinkerPreStreamProtocol> multiLinkerPreStreamImpl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)receiveChannelMessage:;
- (void)onUserEnterLiveRoom:;
- (void)onUserQuitLiveRoom:;
- (void)streamPlayer_startToPlay;
- (void)preloadElement;
- (void)onMessageReceivce:withDict:;
- (void)audienceSmoothEnterRoomDidEnd;
- (void)createMultiLinkerPreStreamImpl;
- (id)multiLinkerPreStreamImpl;
- (void)setMultiLinkerPreStreamImpl:;
- (void)didStartOnMultiLinker;
- (void)setupLiveRoomModel:preStreamContainer:previewStreamScene:;
- (void)videoAudioStreamPlayer_startToPlay;
- (void)videoAudioStreamPlayer_stop;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)shouldActivateElement;
@end
