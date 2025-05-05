@interface RPTextInputSession : NSObject
@property (nonatomic) <RPMessageable> messenger;
@property (nonatomic) RTIInputSystemSourceSession rtiSession;
@property (nonatomic) @? rtiUpdatedHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_activateWithCompletion:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (void)handleTextActionPayload:;
- (void).cxx_destruct;
- (id)messenger;
- (void)invalidate;
- (void)setMessenger:;
- (void)_handleTextInputStarted:;
- (void)_handleTextInputStopped:;
- (void)_handleTextInputChange:started:;
- (id)rtiSession;
- (id)rtiUpdatedHandler;
- (void)setRtiUpdatedHandler:;
@end
