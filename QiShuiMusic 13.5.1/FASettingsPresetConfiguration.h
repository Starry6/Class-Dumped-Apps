@interface FASettingsPresetConfiguration : NSObject
@property (nonatomic) NSDictionary values;
- (id)values;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithValues:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)validatedValuesFromValues:;
- (BOOL)isValidTriState:;
- (BOOL)isValidBoolValue:;
+ (BOOL)supportsSecureCoding;
+ (id)boolKeys;
@end
