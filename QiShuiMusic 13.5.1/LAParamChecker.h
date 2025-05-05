@interface LAParamChecker : NSObject
+ (id)_checkEventProcessingEventDictionary:;
+ (id)_checkDictionary:againstClassDictionary:entryName:customCheckBlock:;
+ (id)checkOptions:;
+ (id)checkInternalOperation:options:;
+ (id)checkPolicy:;
+ (id)checkACL:;
+ (id)_checkEventProcessing:;
+ (id)_checkSet:forValue:entityName:;
+ (id)checkCredentialType:;
+ (id)checkEvent:;
@end
