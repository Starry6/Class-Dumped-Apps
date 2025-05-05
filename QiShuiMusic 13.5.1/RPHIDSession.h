@interface RPHIDSession : NSObject
@property (nonatomic) <RPMessageable> messenger;
- (id)init;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)messenger;
- (void)invalidate;
- (void)setMessenger:;
- (void)hidCommand:destinationID:completion:;
- (void)hidCommand:buttonState:destinationID:completion:;
@end
