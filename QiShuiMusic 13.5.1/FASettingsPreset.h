@interface FASettingsPreset : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) q minAge;
@property (nonatomic) q maxAge;
@property (nonatomic) NSArray sources;
- (id)initWithDictionary:;
- (id)identifier;
- (long long)minAge;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (long long)maxAge;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)sourceWithIdentifier:;
- (id)sources;
- (BOOL)isEqual:;
- (id)initWithIdentifier:minAge:maxAge:sources:;
+ (BOOL)supportsSecureCoding;
@end
