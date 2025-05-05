@interface UASDKStorage : NSObject
+ (id)archivedObject:;
+ (BOOL)deleteMemoryObjectWithKey:;
+ (BOOL)deletePersistentObjectWithKey:expectedClass:;
+ (id)memoryObjectWithKey:;
+ (id)persistentObjectWithKey:expectedClass:;
+ (void)setMemoryObject:withKey:;
+ (void)setPersistentObject:withKey:;
+ (id)unarchivedObjectWithData:expectedClass:;
@end
