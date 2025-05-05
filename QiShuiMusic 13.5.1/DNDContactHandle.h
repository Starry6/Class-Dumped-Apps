@interface DNDContactHandle : NSObject
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) Q type;
@property (nonatomic) NSString value;
- (id)_descriptionForRedacted:;
- (id)contactIdentifier;
- (id)redactedDescription;
- (id)normalizedValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)matchesContactHandle:;
- (id)_initWithContactIdentifier:type:value:;
+ (BOOL)supportsSecureCoding;
@end
