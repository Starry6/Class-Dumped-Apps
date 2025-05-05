@interface IESECRelationHTTPVerifiedKey : IESECObjectWrapper
@property (nonatomic) Q keyPreference;
- (id)initWithKey:preference:;
- (unsigned long long)keyPreference;
- (void)setKeyPreference:;
- (unsigned long long)hash;
- (BOOL)isRequired;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)optionalKey:;
+ (id)requiredKey:;
+ (id)verifiedKeysWithDictionary:requiredKeys:;
@end
