@interface AVCaptureDeferredPhotoProcessor : NSObject
@property (nonatomic) NSArray persistentlyStoredDeferredPhotoProxies;
- (void)dealloc;
- (void)_handleNotification:payload:;
- (BOOL)isPaused;
- (void)setPaused:;
- (id)persistentlyStoredDeferredPhotoProxies;
- (BOOL)cancelProcessingForPhotoProxy:error:;
- (void)processPhotoProxy:queuePosition:delegate:;
- (void)deletePersistentStorageForPhotoProxy:;
- (id)_initWithApplicationID:;
- (id)prettyPrintDescriptionForContainer:;
- (void)_setFigCaptureDeferredPhotoProcessor:;
- (int)_establishServerConnection;
- (id)_processingRequestForCaptureRequestIdentifier:photoIdentifier:;
- (void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:forRequest:;
- (void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:forRequest:;
- (void)_handleServerConnectionDiedNotification;
- (void)_dispatchFailureCallbacks:forProcessingRequest:error:;
+ (id)sharedPhotoProcessorForApplicationID:;
+ (id)sharedPhotoProcessor;
@end
