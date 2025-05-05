@interface IESSaaSTIMDebugOptions : MTLModel
@property (nonatomic) BOOL skipWebSocketSend;
@property (nonatomic) BOOL pullerTimer;
- (void)setPullerTimer:;
- (BOOL)pullerTimer;
- (void)setSkipWebSocketSend:;
- (BOOL)skipWebSocketSend;
+ (id)sharedInstance;
@end
