@interface AMSMediaToken : NSObject
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) double lifetime;
@property (nonatomic) NSString tokenString;
@property (nonatomic) BOOL valid;
- (double)lifetime;
- (id)invalidCopy;
- (BOOL)isExpired;
- (id)initWithString:expirationDate:lifetime:;
- (id)initWithCoder:;
- (id)initWithString:expirationDate:lifetime:valid:;
- (double)percentageOfLifetimeRemaining;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (id)tokenString;
- (void).cxx_destruct;
- (id)description;
- (BOOL)willExpireWithin:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
