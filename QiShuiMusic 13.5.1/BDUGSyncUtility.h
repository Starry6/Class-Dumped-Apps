@interface BDUGSyncUtility : NSObject
+ (double)fileStorageSize;
+ (id)did;
+ (id)commonParamsData;
+ (id)compressData:success:;
+ (id)dataFromFileForKey:;
+ (double)dbStorageSize;
+ (BOOL)deleteDataFromFileForKey:;
+ (BOOL)deleteFuzzyDataFromFileForKey:;
+ (void)saveBoolValue:forKey:;
+ (BOOL)saveDataToFile:forKey:;
+ (void)saveIntegerValue:forKey:;
+ (id)stringWithExtra:channel:;
+ (id)topicIDFromReqID:;
+ (id)syncDirectory;
+ (id)uid;
+ (long long)boolForKey:defaultValue:;
+ (id)header;
+ (long long)integerForKey:defaultValue:;
@end
