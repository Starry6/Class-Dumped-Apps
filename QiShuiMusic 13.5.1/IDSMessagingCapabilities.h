@interface IDSMessagingCapabilities : NSObject
@property (nonatomic) NSSet requiredCapabilities;
@property (nonatomic) NSSet requiredMissingCapabilities;
- (id)requiredCapabilities;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setRequiredCapabilities:;
- (id)initWithRequiredCapabilities:requiredMissingCapabilities:;
- (id)requiredMissingCapabilities;
- (void)setRequiredMissingCapabilities:;
+ (BOOL)supportsSecureCoding;
@end
