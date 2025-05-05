@interface FMDEmergencyCallInfoPublisherConfiguration : NSObject
@property (nonatomic) NSString serverHost;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)serverHost;
- (void)setServerHost:;
+ (BOOL)supportsSecureCoding;
@end
