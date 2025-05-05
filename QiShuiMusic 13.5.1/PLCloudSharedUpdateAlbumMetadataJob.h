@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob
@property (nonatomic) NSDictionary metadata;
- (id)initFromXPCObject:libraryServicesManager:;
- (id)metadata;
- (void)run;
- (long long)daemonOperation;
- (void)setMetadata:;
- (void)runDaemonSide;
- (void).cxx_destruct;
- (id)description;
- (void)encodeToXPCObject:;
- (id)_argumentsDictionaryAsData:;
- (id)_argumentsDictionaryFromXPCEvent:;
+ (void)updateAlbumMetadata:;
@end
