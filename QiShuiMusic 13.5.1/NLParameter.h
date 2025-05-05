@interface NLParameter : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q parameterType;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
- (double)minimumValue;
- (id)_shortDescription;
- (id)_dictionaryRepresentation;
- (double)maximumValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)parameterType;
- (id)initWithName:type:minimumValue:maximumValue:;
- (id)_initWithDictionaryRepresentation:error:;
- (id)_hyperTuneDictionary;
+ (BOOL)supportsSecureCoding;
+ (id)parameterWithName:type:minimumValue:maximumValue:;
@end
