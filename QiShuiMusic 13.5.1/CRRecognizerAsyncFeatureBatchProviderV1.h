@interface CRRecognizerAsyncFeatureBatchProviderV1 : NSObject
@property (nonatomic) NSObject<CRTextRecognizerModelInputProvider> inputProvider;
@property (nonatomic) CRNeuralRecognizerConfiguration configuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)inputProvider;
- (void)setInputProvider:;
- (id)initWithConfiguration:inputProvider:error:;
- (void)enumerateInputsForImage:textFeatures:usingBlock:;
@end
