@interface AKAuthorizationScopesUserSelection : NSObject
@property (nonatomic) AKUserInformation userInformation;
@property (nonatomic) BOOL makePrivateEmail;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)userInformation;
- (void)setUserInformation:;
- (BOOL)makePrivateEmail;
- (void)setMakePrivateEmail:;
+ (BOOL)supportsSecureCoding;
@end
