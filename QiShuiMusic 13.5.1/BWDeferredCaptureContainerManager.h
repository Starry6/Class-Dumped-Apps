@interface BWDeferredCaptureContainerManager : BWDeferredContainerManagerBase
- (id)init;
- (id)manifestsForApplicationID:err:;
- (int)deleteContainerForApplicationID:captureRequestIdentifier:;
- (BOOL)canDefer;
- (id)createCaptureContainerWithApplicationID:captureRequestIdentifier:err:;
- (int)addCaptureContainer:;
- (id)lookupCaptureContainer:;
- (int)commitContainer:;
- (int)abortContainer:error:;
- (int)queryContainerStatusForApplicationID:captureRequestIdentifier:status:;
- (id)copyRemoteContainerForApplicationID:captureRequestIdentifier:err:;
- (int)releaseRemoteContainerForApplicationID:captureRequestIdentifier:;
- (int)addBufferPool:;
- (int)removeBufferPool:;
- (id)newPixelBuffer:;
- (void)flush:toMinimumCapacity:;
+ (id)sharedInstance;
@end
