@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork
@property (nonatomic) CHSingletonMLModel model;
@property (nonatomic) NSString resourcePath;
@property (nonatomic) NSArray inputNames;
@property (nonatomic) NSDictionary featureCounts;
@property (nonatomic) NSArray outputNames;
@property (nonatomic) NSDictionary classCounts;
- (id)model;
- (void)dealloc;
- (void).cxx_destruct;
- (id)resourcePath;
- (id)outputNames;
- (id)initWithModelName:;
- (id)inputNames;
- (id)initWithModelName:featureIndex:;
- (id)featureCounts;
- (id)classCounts;
@end
