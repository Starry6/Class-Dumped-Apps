@interface CKRepairZonePCSOperation : CKDatabaseOperation
@property (nonatomic) <CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKRepairZonePCSOperationInfo operationInfo;
@property (nonatomic) NSArray zoneIDs;
@property (nonatomic) @? zoneRepairedBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (void)performCKOperation;
- (void)setZoneIDs:;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (id)zoneIDs;
- (void)handleZonePCSRepairForID:pcsInfo:error:;
- (id)initWithZoneIDsToRepair:;
- (void)setZoneRepairedBlock:;
- (id)zoneRepairedBlock;
+ (void)applyDaemonCallbackInterfaceTweaks:;
@end
