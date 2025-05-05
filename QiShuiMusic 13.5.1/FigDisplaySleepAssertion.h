@interface FigDisplaySleepAssertion : NSObject
- (unsigned char)resetIdleTimer;
- (void)dealloc;
- (id)initWithReason:queue:expirationHandler:;
@end
