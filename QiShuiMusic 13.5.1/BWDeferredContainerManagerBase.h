@interface BWDeferredContainerManagerBase : NSObject
- (void)dealloc;
- (id)initWithQueuePriority:;
- (id)_containerURLForApplicationID:captureRequestIdentifier:exists:isDirectory:;
- (id)manifestsForApplicationID:err:;
- (id)manifestForApplicationID:captureRequestIdentifier:err:;
- (int)deleteContainerForApplicationID:captureRequestIdentifier:;
@end
