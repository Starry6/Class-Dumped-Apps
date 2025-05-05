@interface RPHIDTouchSession : NSObject
@property (nonatomic) I flags;
@property (nonatomic) <RPMessageable> messenger;
@property (nonatomic) {CGSize=dd} screenSize;
- (id)init;
- (void)_activateWithCompletion:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (id)screenSize;
- (void).cxx_destruct;
- (void)setFlags:;
- (unsigned int)flags;
- (id)messenger;
- (void)invalidate;
- (void)setScreenSize:;
- (void)setMessenger:;
- (void)sendTouchEvent:completion:;
@end
