@interface PLLibraryServicesCPLReadiness : NSObject
- (id)libraryServicesManager;
- (void)performOnceLibraryIsReadyForCPLManager:;
- (void)_callOutstandingCPLReadinessBlocks;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (void)pauseCloudPhotos:reason:;
- (void)_stopWaitingForCPLReadiness;
- (id)initWithLibraryServicesManager:;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)_updateIsReady:statusMessage:;
- (void).cxx_destruct;
- (void)processCloudPhotosLibraryStateChange:;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (void)invalidate;
- (BOOL)_isReadyForCloudPhotoLibraryWithStatus:;
@end
