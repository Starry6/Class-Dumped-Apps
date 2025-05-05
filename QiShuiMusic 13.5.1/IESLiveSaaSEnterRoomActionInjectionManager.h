@interface IESLiveSaaSEnterRoomActionInjectionManager : NSObject
@property (nonatomic) IESLiveSaaSEnterRoomAisle roomAisle;
@property (nonatomic) NSMutableDictionary allRoomAisleActions;
- (void)unbindRoomAisle;
- (id)actionsForEnterStage:;
- (id)allRoomAisleActions;
- (void)bindRoomAisle:;
- (void)executedSliceBlocksforEnterRoomStage:;
- (void)regeisterBlock:forStage:;
- (void)removeRoomAisleEnterBlockForStage:;
- (id)roomAisle;
- (void)setAllRoomAisleActions:;
- (void)setRoomAisle:;
- (void).cxx_destruct;
+ (void)regeisterBlock:forStage:;
+ (id)sharedManager;
@end
