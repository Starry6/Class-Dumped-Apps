@interface MontrealNNGenerateNode : NSObject
@property (nonatomic) {?=qqqqqqq[8q]Q[8[4i]][4[4i]][16i][16f][16^v][16^v]} parameters;
@property (nonatomic) Q weightIter;
@property (nonatomic) MontrealNNModelNode node;
@property (nonatomic) Q weightDataFormat;
- (id)node;
- (id)parameters;
- (void).cxx_destruct;
- (void)setInputs:;
- (id)initWithParameters:weightDataFormat:;
- (id)dataFromWeights:length:;
- (unsigned long long)generateNode:node:weightIter:inputs:outputs:;
- (void)setInput:inputIndex:;
- (unsigned long long)weightIter;
- (unsigned long long)weightDataFormat;
@end
