@interface DESServiceAccess : NSObject
+ (BOOL)hasRecordAccessToBundleId:connection:error:;
+ (BOOL)hasToolEntitlement:;
+ (BOOL)hasOnDemandLaunchEntitlement:;
+ (BOOL)hasMLRCtlEntitlement:;
@end
