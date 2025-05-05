@interface ASCAppleIDCredential : NSObject
@property (nonatomic) AKAuthorization authorization;
@property (nonatomic) NSString user;
@property (nonatomic) NSData identityToken;
@property (nonatomic) NSString state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authorization;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithAuthorization:;
- (id)identityToken;
- (id)state;
- (id)user;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithUser:identityToken:state:;
+ (BOOL)supportsSecureCoding;
@end
