@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase
- (id)init;
- (id)manifestsForApplicationID:err:;
- (int)deleteContainerForApplicationID:captureRequestIdentifier:;
- (id)createProcessingContainerWithApplicationID:captureRequestIdentifier:openForPeeking:err:;
- (void)releaseProcessingContainer:;
- (int)waitForShaderCompilation;
+ (id)sharedInstance;
@end
