@interface HTSEffectManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> operationQueue;
@property (nonatomic) HTSVideoData videoData;
@property (nonatomic) NSMutableArray operationTimeRange;
@property (nonatomic) q currTimeMachineType;
@property (nonatomic) double videoDuration;
@property (nonatomic) double timeMachineBeginTime;
@property (nonatomic) double timeMachineBeginTimeProcessed;
@property (nonatomic) double newTimeMachineDuration;
@property (nonatomic) q currentOperationNum;
@property (nonatomic) HTSEffectManager previousManager;
@property (nonatomic) BOOL isNewTimeMachine;
@property (nonatomic) NSMutableArray effectiveTimeRange;
- (double)removeEffectWithRangeID:pathId:;
- (id)previousManager;
- (void)runSyncInBlock:;
- (id)addOperationWithEffectId2:startTime:endTime:;
- (void)addOperationWithEffectId:startTime:endTime:;
- (void)addOperationWithType:startTime:endTime:;
- (void)addOperationforRelativity:;
- (void)addOperationforReverse:;
- (void)addOperationforTrap:;
- (void)adjustWithMachineType:beginTime:duration:;
- (void)adjustWithNewTimeMachineType:beginTime:endTime:duration:;
- (void)cleanOperation;
- (void)convertStringToTimeInfo:;
- (long long)currTimeMachineType;
- (long long)currentOperationNum;
- (unsigned long long)getCurrentEffect:;
- (id)getCurrentEffectId:;
- (id)getCurrentEffectTimeRange:;
- (id)getEffectiveTimeRange;
- (id)getLastOperationTimeRange;
- (id)getOperationArray:;
- (id)getTimeMachineTypeWithArray:;
- (id)initWithVideoData:;
- (id)initWithVideoData:operationDictionary:;
- (BOOL)isEffectNeedHighBitrate;
- (id)isEffectTimeRangeEffective:;
- (BOOL)isNewTimeMachine;
- (void)machineTypeConvertFromNormalToRelativity:beginTime:;
- (void)machineTypeConvertFromNormalToReverse:;
- (void)machineTypeConvertFromNormalToTrap:beginTime:;
- (void)machineTypeConvertToNormal;
- (double)newTimeMachineDuration;
- (void)newTimeMachineTranstoReverseWithTimeRange:operationTimeRange:duration:;
- (void)newTimeMachineTypeConvertFromNormalToReverse:;
- (id)operationTimeRange;
- (void)reCalculateEffectiveTimeRange;
- (double)removeLastOperation;
- (void)setCurrTimeMachineType:;
- (void)setCurrentOperationNum:;
- (void)setIsNewTimeMachine:;
- (void)setNewTimeMachineDuration:;
- (void)setOperationTimeRange:;
- (void)setPreviousManager:;
- (void)setTimeMachineBeginTime:;
- (void)setTimeMachineBeginTimeProcessed:;
- (void)setVideoData:;
- (id)startCheckEffectTimeRangeEffective:withCount:;
- (double)timeMachineBeginTime;
- (double)timeMachineBeginTimeProcessed;
- (void)timeMachineTranstoRelativityWithTimeRange:operationTimeRange:duration:beginTime:;
- (void)timeMachineTranstoReverseWithTimeRange:operationTimeRange:duration:;
- (BOOL)timeMachineTranstoTrapWithTimeRange:operationTimeRange:duration:beginTime:;
- (void)trapHTSTimeRange:withSourceTimeRange:timeRangeArray:beginTime:;
- (void)updateEffectTimeRange:startTime:endTime:;
- (id)videoData;
- (id)init;
- (void)dealloc;
- (id)operationQueue;
- (double)videoDuration;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setOperationQueue:;
- (id)effectiveTimeRange;
- (void)setEffectiveTimeRange:;
- (void)setVideoDuration:;
- (id)getDictionary;
@end
