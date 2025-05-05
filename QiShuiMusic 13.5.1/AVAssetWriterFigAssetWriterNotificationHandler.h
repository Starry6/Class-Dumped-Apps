@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject
@property (nonatomic) AVWeakReference weakReferenceToDelegate;
@property (nonatomic) <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (void)_setWeakReferenceToDelegate:;
- (void)_teardownNotificationHandlers;
- (void)_handleFailedNotificationWithError:;
- (id)delegate;
- (void)_handleCompletedWritingNotification;
- (void)_callDelegateIfNotCalledWithSuccess:error:;
- (id)_weakReferenceToDelegate;
- (void)_handleServerDiedNotification;
- (id)initWithFigAssetWriter:;
@end
