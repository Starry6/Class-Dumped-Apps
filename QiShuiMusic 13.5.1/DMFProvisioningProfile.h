@interface DMFProvisioningProfile : NSObject
@property (nonatomic) NSString UUID;
@property (nonatomic) NSString name;
@property (nonatomic) NSDate expirationDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithUUID:name:expirationDate:;
+ (BOOL)supportsSecureCoding;
@end
