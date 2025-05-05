@interface RPHIDGCSession : NSObject
@property (nonatomic) <RPMessageable> messenger;
- (id)initWithOptions:;
- (void)_activateWithCompletion:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)messenger;
- (void)invalidate;
- (void)setMessenger:;
- (void)sendGCEvent:destinationID:completion:;
@end
