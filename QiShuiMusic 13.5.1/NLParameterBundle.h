@interface NLParameterBundle : NSObject
@property (nonatomic) NSArray parameters;
@property (nonatomic) NSArray parameterNames;
@property (nonatomic) NSDictionary parameterValues;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)metadata;
- (BOOL)writeToURL:error:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)parameters;
- (void)encodeWithCoder:;
- (id)parameterNames;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithContentsOfURL:error:;
- (id)copyWithZone:;
- (id)parameterValues;
- (id)initWithParameters:values:metadata:;
- (id)initWithDictionaryRepresentation:error:;
- (id)parameterForName:;
- (id)parameterValueForName:;
- (BOOL)getContinuousParameterValueForName:value:;
- (BOOL)getIntegralParameterValueForName:value:;
+ (BOOL)supportsSecureCoding;
+ (id)parameterBundleWithParameters:values:metadata:;
+ (id)parameterBundleWithContentsOfURL:error:;
@end
