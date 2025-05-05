@interface VSRecognitionResultHandlingThread : NSObject
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)invalidate;
- (void)_handleRequests;
- (void)_notifyRequestHandled:;
- (void)handleResults:withHandler:;
@end
