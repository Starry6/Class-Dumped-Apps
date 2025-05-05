@interface GEOResourceLoader : NSObject
@property (nonatomic) GEOApplicationAuditToken auditToken;
@property (nonatomic) BOOL requiresWiFi;
@property (nonatomic) BOOL preferDirectNetworking;
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_cleanup;
- (id)init;
- (void)setAuditToken:;
- (void)cancel;
- (BOOL)_establishHardLinkIfPossibleForResource:toResource:error:;
- (id)auditToken;
- (void)setRequiresWiFi:;
- (id)progress;
- (void)_writeResourceToDisk:withData:orTempFile:checksum:eTag:completionHandler:callbackQueue:;
- (void)_loadResourcesFromDisk;
- (void)setPreferDirectNetworking:;
- (void)startWithCompletionHandler:callbackQueue:;
- (void).cxx_destruct;
- (void)_loadNextResourceFromNetwork;
- (BOOL)_copyResource:fromPath:allowCreatingHardLink:error:;
- (id)initWithTargetDirectory:baseURL:alternateURLs:proxyURL:resources:forceUpdateCheck:maximumConcurrentLoads:additionalDirectoryToConsider:log:signpostID:;
- (BOOL)requiresWiFi;
- (BOOL)preferDirectNetworking;
+ (Class)resourceLoadOperationClass;
@end
