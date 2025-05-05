@interface CKAssetRepairOperationUtilities : NSObject
+ (id)createRepairOperationGroupWithName:;
+ (id)createRepairContainerFromContainer:;
+ (id)createRepairContainerFromContainer:withOverrides:;
+ (void)clearRepairZoneForDatabase:withRepairContainerOverrides:completionHandler:;
+ (id)repairRecordFromRecord:field:listIndex:repairZoneID:;
+ (id)uploadRequestMetadataFromRepairRecord:;
+ (BOOL)repairErrorShouldBeMarkedAsBroken:;
+ (BOOL)errorIsRetriableInNearFuture:;
+ (BOOL)errorShouldTriggerNetworkReachabilityEvent:;
@end
