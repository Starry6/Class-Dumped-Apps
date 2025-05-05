@interface WiFiP2PAWDLStateMonitorConfiguration : NSObject
@property (nonatomic) Q options;
@property (nonatomic) NSArray servicesRequiringAvailabilityNotification;
- (void)setOptions:;
- (id)init;
- (id)servicesRequiringAvailabilityNotification;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setServicesRequiringAvailabilityNotification:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
