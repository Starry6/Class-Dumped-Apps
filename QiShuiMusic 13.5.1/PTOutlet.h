@interface PTOutlet : NSObject
- (id)addAction:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)removeActionForToken:;
- (id)_init;
- (void)_invokeActions;
+ (BOOL)supportsSecureCoding;
@end
