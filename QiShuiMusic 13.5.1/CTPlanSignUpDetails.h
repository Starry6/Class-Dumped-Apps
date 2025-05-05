@interface CTPlanSignUpDetails : NSObject
@property (nonatomic) NSString signUpUrl;
@property (nonatomic) NSString signUpUrlType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithSignUpUrl:signUpUrlType:;
- (id)signUpUrl;
- (void)setSignUpUrl:;
- (id)signUpUrlType;
- (void)setSignUpUrlType:;
+ (BOOL)supportsSecureCoding;
@end
