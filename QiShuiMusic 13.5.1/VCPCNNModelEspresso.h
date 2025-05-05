@interface VCPCNNModelEspresso : NSObject
@property (nonatomic) {vector<espresso_buffer_t inputBlobs;
@property (nonatomic) {vector<espresso_buffer_t outputBlobs;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} inputBlob;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} outputBlob;
@property (nonatomic) NSString resConfig;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)softmax;
- (id)initWithParameters:inputNames:outputNames:properties:;
- (int)prepareModelWithConfig:;
- (int)prepareModelInput:;
- (int)prepareModelInputs:;
- (int)espressoForward:;
- (int)espressoForwardInputs:;
- (void)normalization:;
- (id)getEspressoContext;
- (int)getPlanPhase;
- (id)inputBlobs;
- (void)setInputBlobs:;
- (id)outputBlobs;
- (void)setOutputBlobs:;
- (id)inputBlob;
- (void)setInputBlob:;
- (id)outputBlob;
- (void)setOutputBlob:;
- (id)resConfig;
@end
