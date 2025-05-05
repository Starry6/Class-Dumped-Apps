@interface SKDisplayLink : NSObject
@property (nonatomic) BOOL paused;
@property (nonatomic) q preferredFramesPerSecond;
@property (nonatomic) CADisplay display;
- (id)init;
- (void)dealloc;
- (void)setDisplay:;
- (void)setPreferredFramesPerSecond:;
- (id)display;
- (long long)preferredFramesPerSecond;
- (BOOL)isPaused;
- (void)setPaused:;
- (void).cxx_destruct;
- (void)_teardown;
- (void)_setup;
- (void)invalidate;
- (void)_caDisplayLinkCallback;
- (BOOL)_callbackAlreadyInProgress;
- (void)_setCallbackAlreadyInProgress:;
- (id)initWithDisplay:handler:client:;
- (void)_callbackForNextFrame:;
+ (id)displayLinkWithDisplay:handler:client:;
@end
