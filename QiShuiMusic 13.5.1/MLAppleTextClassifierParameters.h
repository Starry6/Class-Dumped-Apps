@interface MLAppleTextClassifierParameters : NSObject
@property (nonatomic) Q revision;
@property (nonatomic) NSString language;
@property (nonatomic) NSString inputFeatureName;
@property (nonatomic) NSString outputFeatureName;
@property (nonatomic) NSData modelParameterData;
@property (nonatomic) NSArray labelNames;
@property (nonatomic) NSDictionary metadata;
- (void)setLanguage:;
- (id)language;
- (id)metadata;
- (void)setRevision:;
- (void)setMetadata:;
- (void).cxx_destruct;
- (unsigned long long)revision;
- (id)initWithData:language:inputFeatureName:outputFeatureName:modelData:labelNames:metadata:error:;
- (id)inputFeatureName;
- (void)setInputFeatureName:;
- (id)outputFeatureName;
- (void)setOutputFeatureName:;
- (id)modelParameterData;
- (void)setModelParameterData:;
- (id)labelNames;
- (void)setLabelNames:;
- (id)initWithData:language:inputFeatureName:outputFeatureName:modelData:labelNames:error:;
@end
