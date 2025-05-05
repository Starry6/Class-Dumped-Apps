@interface MLParameterDescription : NSObject
@property (nonatomic) MLParameterKey key;
@property (nonatomic) @ defaultValue;
@property (nonatomic) MLNumericConstraint numericConstraint;
- (void)setDefaultValue:;
- (id)key;
- (id)defaultValue;
- (id)initWithCoder:;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)numericConstraint;
- (void)setNumericConstraint:;
+ (BOOL)supportsSecureCoding;
+ (id)parameterDescriptionForKey:defaultValue:numericConstraint:;
+ (id)parameterDescriptionForKey:int64ParameterSpec:;
+ (id)parameterDescriptionForKey:doubleParameterSpec:;
+ (id)parameterDescriptionForKey:stringParameterSpec:;
+ (id)parameterDescriptionForKey:boolParameterSpec:;
@end
