@interface AFSiriActivationHandlerFrontendProcess : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)notifyObserver:didChangeStateFrom:to:;
- (id)initWithConnection:;
- (BOOL)handleContext:completion:;
- (void)_waitUntilListeningForContext:timeoutInterval:completion:;
@end
