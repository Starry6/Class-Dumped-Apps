@interface FPXServiceDescriptor : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSString requiredEntitlement;
- (id)requiredEntitlement;
- (void)setServiceName:;
- (id)serviceName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setRequiredEntitlement:;
+ (BOOL)supportsSecureCoding;
@end
