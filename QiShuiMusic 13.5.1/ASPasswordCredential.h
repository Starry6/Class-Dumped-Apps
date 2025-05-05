@interface ASPasswordCredential : NSObject
@property (nonatomic) NSString user;
@property (nonatomic) NSString password;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)password;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)user;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithUser:password:;
+ (BOOL)supportsSecureCoding;
+ (id)credentialWithUser:password:;
@end
