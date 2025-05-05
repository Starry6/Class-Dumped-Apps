@interface ASAuthorizationRequest : NSObject
@property (nonatomic) <ASAuthorizationProvider> provider;
- (id)init;
- (id)initWithProvider:;
- (id)initWithCoder:;
- (id)provider;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)supportsStyle:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
