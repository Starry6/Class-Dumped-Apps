@interface CLBeaconIdentityConstraint : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSNumber major;
@property (nonatomic) NSNumber minor;
- (id)initWithUUID:;
- (id)init;
- (void)dealloc;
- (void)setUUID:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id)major;
- (id)minor;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithUUID:major:;
- (id)initWithUUID:major:minor:;
- (id)_initWithUUID:major:minor:;
+ (BOOL)supportsSecureCoding;
+ (id)any;
@end
