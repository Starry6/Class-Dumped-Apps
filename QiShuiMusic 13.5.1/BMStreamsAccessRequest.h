@interface BMStreamsAccessRequest : NSObject
@property (nonatomic) BMAccessControlPolicy policy;
@property (nonatomic) NSXPCListener listener;
- (id)applicationIdentifier;
- (void)setPolicy:;
- (void)removeDirectoryAtPath:reply:;
- (id)initWithDomain:;
- (id)policy;
- (void)requestAccessToFlexibleStorageWithReply:;
- (void)requestAccess:streamIdentifier:streamType:reply:;
- (id)listener;
- (BOOL)_hasDirectoryAtPath:;
- (void)removeFileAtPath:reply:;
- (void)createDirectoryAtPath:reply:;
- (id)connection;
- (void).cxx_destruct;
- (void)sharedMemoryForFileAtPath:flags:reply:;
- (void)requestBiomeEndpoint:reply:;
- (void)temporaryFileHandleWithProtection:reply:;
- (void)fileHandleForFileAtPath:flags:protection:reply:;
- (BOOL)_createDirectoryAtPath:;
- (void)_processRequestForAccess:reply:;
- (void)setListener:;
- (void)_configureDirectoryForStreamType:;
- (void)replaceFileAtPath:withFileHandle:reply:;
@end
