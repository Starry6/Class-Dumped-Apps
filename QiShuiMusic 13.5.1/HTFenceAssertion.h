@interface HTFenceAssertion : NSObject
- (void)invalidate;
- (id)initWithFenceName:;
- (void)blown;
@end
