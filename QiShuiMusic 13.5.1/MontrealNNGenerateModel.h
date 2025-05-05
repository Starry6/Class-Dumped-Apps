@interface MontrealNNGenerateModel : NSObject
@property (nonatomic) Q weightFormat;
@property (nonatomic) MontrealNNModelNetwork network;
@property (nonatomic) ^{MontrealNeuralNetwork=} nnObject;
@property (nonatomic) NSMutableDictionary inputs;
@property (nonatomic) NSMutableDictionary outputs;
- (id)inputs;
- (id)network;
- (void)dealloc;
- (void)removeOutput:;
- (id)outputs;
- (void)merge:;
- (void).cxx_destruct;
- (void)removeInput:;
- (void)addInputs:;
- (id)generateModelContainer;
- (id)initWithWeightFormat:;
- (void)setNnObject:;
- (id)nnObject;
- (id)modelContainerPath;
- (void)addOutputs:;
- (id)networkInputs;
- (id)networkOutputs;
- (unsigned long long)weightFormat;
@end
