@interface MLAppleWordEmbeddingParameters : NSObject
@property (nonatomic) Q revision;
@property (nonatomic) NSString language;
@property (nonatomic) NSString inputFeatureName;
@property (nonatomic) NSString outputFeatureName;
@property (nonatomic) NSData modelParameterData;
@property (nonatomic) NSDictionary metadata;
- (void)setLanguage:;
- (id)language;
- (id)metadata;
- (void)setRevision:;
- (void)setMetadata:;
- (void).cxx_destruct;
- (unsigned long long)revision;
- (id)inputFeatureName;
- (void)setInputFeatureName:;
- (id)outputFeatureName;
- (void)setOutputFeatureName:;
- (id)modelParameterData;
- (void)setModelParameterData:;
- (id)initWithData:language:inputFeatureName:outputFeatureName:modelData:metadata:error:;
- (id)initWithData:language:inputFeatureName:outputFeatureName:modelData:error:;
@end
