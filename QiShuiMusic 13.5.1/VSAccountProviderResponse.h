@interface VSAccountProviderResponse : NSObject
@property (nonatomic) NSString authenticationScheme;
@property (nonatomic) NSString status;
@property (nonatomic) NSString body;
- (void)setAuthenticationScheme:;
- (void)setStatus:;
- (id)init;
- (id)body;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setBody:;
- (void).cxx_destruct;
- (id)description;
- (id)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)authenticationScheme;
+ (BOOL)supportsSecureCoding;
@end
