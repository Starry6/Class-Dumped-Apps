@interface LNActionConfigurationSwitchCase : NSObject
@property (nonatomic) LNValue value;
@property (nonatomic) LNActionConfiguration configuration;
@property (nonatomic) BOOL defaultCase;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)configuration;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDefaultConfiguration:;
- (id)initWithValue:configuration:;
- (BOOL)isDefaultCase;
+ (BOOL)supportsSecureCoding;
@end
