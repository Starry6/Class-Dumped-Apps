@interface DMFUser : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) Q dataQuota;
@property (nonatomic) Q dataUsed;
@property (nonatomic) BOOL hasDataToSync;
@property (nonatomic) BOOL isCurrentUser;
- (id)username;
- (BOOL)hasDataToSync;
- (unsigned long long)dataQuota;
- (unsigned long long)dataUsed;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isCurrentUser;
- (id)initWithUsername:dataQuota:dataUsed:hasDataToSync:isCurrentUser:;
+ (BOOL)supportsSecureCoding;
@end
