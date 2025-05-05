@interface IESLiveNativeAppEntranceMonitorService : IESLiveGeneralBaseService
@property (nonatomic) NSMapTable stageMachines;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stageMachineWithAppID:linkType:;
- (void)trackNativeAppWithMonitorModel:;
- (void)removeNativeAppStageMachine:linkType:;
- (void)serviceDidLaunch;
- (void)setStageMachines:;
- (id)stageMachines;
- (void)stopTracingWithUserLeavedRoom;
- (void)traceNativeApp:linkType:stage:stageDesc:extra:;
- (void)updateNativeApp:linkType:linkStage:stageDesc:extra:;
- (void).cxx_destruct;
+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:;
@end
