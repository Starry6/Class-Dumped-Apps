@interface CTCarrierSpaceCapabilities : NSObject
@property (nonatomic) BOOL supportsServices;
@property (nonatomic) BOOL supportsUsage;
@property (nonatomic) BOOL supportsPlans;
@property (nonatomic) BOOL supportsApplications;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)supportsServices;
- (void)setSupportsServices:;
- (BOOL)supportsUsage;
- (void)setSupportsUsage:;
- (BOOL)supportsPlans;
- (void)setSupportsPlans:;
- (BOOL)supportsApplications;
- (void)setSupportsApplications:;
+ (BOOL)supportsSecureCoding;
@end
