@interface IESLiveInteractiveSignalApi : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) IESLiveInteractiveSignalConfig config;
@property (nonatomic) q apiRetryCount;
- (long long)apiRetryCount;
- (id)initWithRoomModel:config:;
- (id)roomModel;
- (void)sendSignal:toUsers:channel:basePath:scene:extra:finished:;
- (void)sendSignal:toUsers:channel:extra:finished:;
- (void)sendSignal:toUsers:channel:finished:;
- (void)setApiRetryCount:;
- (void)setRoomModel:;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
@end
