@interface BU_IESGurdFileMetaManager : NSObject
+ (id)activeMetaForAccessKey:channel:;
+ (void)setNeedSynchronizeInactiveMeta:;
+ (void)saveActiveMeta:;
+ (id)activeChannelsDictionary;
+ (id)activeMetaDictionary;
+ (BOOL)checkIfVersionUpdate;
+ (id)copiedDictionaryWithMetaDictionary:;
+ (id)currentVersionKey;
+ (void)deleteActiveMetaForAccessKey:channel:;
+ (void)deleteInactiveMetaForAccessKey:channel:;
+ (id)inactiveChannelsDictionary;
+ (id)inactiveMetaDictionary;
+ (id)inactiveMetaForAccessKey:channel:;
+ (void)innerSaveMetaWithMetaDictionary:accessKey:channel:meta:;
+ (void)innerSynchronizeMetaDataWithDictionary:path:;
+ (id)localMetaDataWithPath:;
+ (BOOL)needSynchronizeActiveMeta;
+ (BOOL)needSynchronizeInactiveMeta;
+ (void)saveInactiveMeta:;
+ (void)setActiveMetaDictionary:;
+ (void)setInactiveMetaDictionary:;
+ (void)setNeedSynchronizeActiveMeta:;
+ (void)setupMetaDataIfNeeded;
+ (void)setupMetaDataNotification;
+ (void)synchronizeMetaData;
@end
