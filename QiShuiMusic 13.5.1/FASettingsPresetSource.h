@interface FASettingsPresetSource : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) FASettingsPresetConfiguration configuration;
- (id)initWithDictionary:;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)configuration;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithIdentifier:configuration:;
+ (BOOL)supportsSecureCoding;
@end
