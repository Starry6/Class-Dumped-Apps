@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)incompleteRestoreProcessesWithReply:;
- (void)setPhotosXPCEndpoint:withReply:;
- (void)getPhotosXPCEndpointWithReply:;
- (void)initializeSharedMemoryForDeferredLogs:;
- (void)dumpPhotoAnalysisStatusWithReply:;
- (void)dumpStatusIncludingDaemon:reply:;
@end
