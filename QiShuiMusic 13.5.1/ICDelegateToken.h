@interface ICDelegateToken : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) q type;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL expired;
- (BOOL)isExpired;
- (id)data;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:data:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:data:expirationDate:;
- (BOOL)expiresBeforeDate:;
+ (BOOL)supportsSecureCoding;
@end
