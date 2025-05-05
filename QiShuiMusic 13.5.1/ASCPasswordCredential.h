@interface ASCPasswordCredential : NSObject
@property (nonatomic) NSString user;
@property (nonatomic) NSString password;
@property (nonatomic) NSString site;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)password;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)user;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)creationDate;
- (id)site;
- (id)initWithUser:password:site:creationDate:;
+ (BOOL)supportsSecureCoding;
@end
