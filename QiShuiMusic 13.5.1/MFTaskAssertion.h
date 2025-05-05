@interface MFTaskAssertion : NSObject
- (void)dealloc;
- (void)cancelTimer;
- (id)initWithName:;
- (id)initWithName:expiration:preventIdleSleep:;
- (BOOL)isValid;
- (id)initWithName:preventIdleSleep:;
- (void).cxx_destruct;
- (void)invalidate;
+ (id)log;
@end
