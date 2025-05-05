@interface AWDLServiceDiscoveryConfiguration : NSObject
@property (nonatomic) NSData serviceKey;
@property (nonatomic) NSData serviceValue;
@property (nonatomic) BOOL isResolve;
- (id)serviceValue;
- (id)initWithCoder:;
- (BOOL)isResolve;
- (void)encodeWithCoder:;
- (id)initWithKey:value:resolve:;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)serviceKey;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
