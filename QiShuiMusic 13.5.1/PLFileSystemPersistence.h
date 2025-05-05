@interface PLFileSystemPersistence : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_backgroundWriteData:toFileAtURL:;
- (void)_performOnWriterQueueWithIdentifier:block:;
+ (void)persistString:forKey:fileURL:;
+ (id)sharedInstance;
+ (void)persistUInt16:forKey:fileURL:;
+ (void)performBlockOnWriterQueue:;
+ (id)persistedAttributesForFileAtURL:exists:includeUnknownAttributes:;
+ (id)persistedAttributesForFileAtURL:;
+ (void)persistUUIDString:forKey:fileURL:;
+ (void)clearAllAttributesForFileAtUrl:;
+ (void)persistMetadata:fileURL:;
+ (void)persistData:forKey:fileURL:;
+ (id)filesystemPersistenceBatchItemForFileAtURL:;
+ (id)persistenceKeyTypes;
@end
