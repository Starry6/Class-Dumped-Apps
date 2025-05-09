@interface MLFeatureDescription : NSObject
@property (nonatomic) NSDictionary valueConstraints;
@property (nonatomic) MLMultiArrayConstraint multiArrayConstraintCached;
@property (nonatomic) MLImageConstraint imageConstraintCached;
@property (nonatomic) MLDictionaryConstraint dictionaryConstraintCached;
@property (nonatomic) MLSequenceConstraint sequenceConstraintCached;
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) BOOL optional;
- (BOOL)isOptional;
- (id)debugQuickLookObject;
- (BOOL)isAllowedValue:;
- (id)dictionaryConstraintCached;
- (BOOL)isAllowedValue:error:;
- (void)setValueConstraints:;
- (BOOL)allowsValuesWithDescription:;
- (id)imageConstraint;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)sequenceConstraint;
- (id)imageConstraintCached;
- (long long)type;
- (id)dictionaryConstraint;
- (void).cxx_destruct;
- (id)valueConstraints;
- (id)initWithName:type:optional:contraints:;
- (id)description;
- (id)name;
- (id)multiArrayConstraint;
- (id)multiArrayConstraintCached;
- (id)sequenceConstraintCached;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)featureDescriptionWithName:type:optional:constraints:;
@end
