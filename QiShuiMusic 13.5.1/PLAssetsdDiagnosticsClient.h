@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient
- (void)setSharedMemoryForDeferredLogging:;
- (BOOL)getPhotosXPCEndpoint:error:;
- (BOOL)dumpCloudPhotosStatusIncludingDaemon:error:;
- (BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:error:;
- (BOOL)incompleteRestoreProcesses:error:;
- (void)setPhotosXPCEndpoint:completionHandler:;
@end
