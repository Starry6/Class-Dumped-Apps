@interface CMFallDetectionServer : NSObject
@property (nonatomic) <CMFallDetectionServerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_addConnection:;
- (id)init;
- (void)_removeConnection:;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)appDidRequestFallDetectionPrompt;
- (void)appDidFinishProcessingEventWithDuration:;
- (void)clientDidStart;
- (void)didHideFallDetectionPromptForProcessID:;
@end
