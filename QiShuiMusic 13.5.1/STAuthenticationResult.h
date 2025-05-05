@interface STAuthenticationResult : NSObject
@property (nonatomic) BOOL authenticated;
- (id)initWithResult:;
- (BOOL)authenticated;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (BOOL)isEqualToAuthenticationResult:;
+ (BOOL)supportsSecureCoding;
@end
