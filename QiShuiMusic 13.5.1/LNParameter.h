@interface LNParameter : LNProperty
@property (nonatomic) LNParameterConfiguration configuration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)configuration;
- (id)initWithIdentifier:value:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithIdentifier:value:configuration:;
+ (BOOL)supportsSecureCoding;
@end
