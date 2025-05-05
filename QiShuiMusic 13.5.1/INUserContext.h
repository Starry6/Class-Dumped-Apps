@interface INUserContext : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_init;
- (void)becomeCurrent;
- (void)_setStore:;
- (void)_becomeCurrentNoHelper;
+ (long long)_type;
+ (BOOL)supportsSecureCoding;
@end
