@interface HMDTTMonitorHelper : NSObject
+ (BOOL)checkArrayDataFormat:;
+ (BOOL)checkDictionaryDataFormat:;
+ (id)filterTrackerReservedKeysWithDataDict:;
+ (id)generateLogID;
+ (id)generateUploadID;
+ (id)logTypeStrForType:;
+ (id)reportHeaderParamsWithInjectedInfo:;
@end
