@interface PUPhotosFileProviderItemProvider : NSItemProvider
@property (nonatomic) NSMutableDictionary _progressByUUID;
@property (nonatomic) NSMutableDictionary _progressProxyByUUID;
@property (nonatomic) NSMutableDictionary _progressSubscriberByUUID;
@property (nonatomic) BOOL _copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)loadObjectOfClass:completionHandler:;
- (id)loadDataRepresentationForTypeIdentifier:completionHandler:;
- (id)loadFileRepresentationForTypeIdentifier:completionHandler:;
- (id)loadInPlaceFileRepresentationForTypeIdentifier:completionHandler:;
- (id)_startProgressForURL:UUID:cancellationHandler:;
- (void)_startObservingProgressProxyIfNeeded:UUID:;
- (void)_completeProgressWithUUID:success:completionHandler:;
- (id)_progressURLForTypeIdentifier:;
- (BOOL)_copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler;
- (void)set_copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler:;
- (id)_progressByUUID;
- (void)set_progressByUUID:;
- (id)_progressProxyByUUID;
- (void)set_progressProxyByUUID:;
- (id)_progressSubscriberByUUID;
- (void)set_progressSubscriberByUUID:;
@end
