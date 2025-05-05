@interface PFCloudKitSerializer : NSObject
- (void)dealloc;
- (id)initWithMirroringOptions:metadataCache:recordNamePrefix:;
- (void).cxx_destruct;
+ (id)defaultRecordZoneIDForDatabaseScope:;
+ (void)_invalidateStaticCaches;
@end
