@interface IESLiveSaaSRoomBorderStore : NSObject
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
- (void)addMessageReceiver:;
- (id)componentContext;
- (void)didUpdateRoom:;
- (id)disposable;
- (id)initWithRoomModel:;
- (id)roomModel;
- (void)setComponentContext:;
- (void)setDisposable:;
- (void)setRoomModel:;
- (void)setTrackContext:;
- (id)trackContext;
- (void)dealloc;
- (void).cxx_destruct;
@end
