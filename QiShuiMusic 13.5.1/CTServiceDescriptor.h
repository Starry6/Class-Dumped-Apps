@interface CTServiceDescriptor : NSObject
@property (nonatomic) q domain;
@property (nonatomic) NSNumber instance;
@property (nonatomic) NSString identifier;
- (id)instance;
- (void)setInstance:;
- (id)identifier;
- (id)initWithCoder:;
- (id)initWithDomain:instance:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)domain;
- (void)setDomain:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithSubscriptionContext:;
+ (id)telephonyDescriptorWithInstance:;
@end
