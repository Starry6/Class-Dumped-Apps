@interface CVNLPCaptionDecoderBlock : CVNLPCaptionModelBase
@property (nonatomic) Q modelIndex;
@property (nonatomic) ^v decoderPlan;
@property (nonatomic) ^v decoderCtx;
@property (nonatomic) {?=^vi} decoderNet;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} attFeatsPlaceholderBlob;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} scaleInput;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} positionInput;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} maskInput;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} blockInput;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} blockOutput;
@property (nonatomic) {map<std::string stateOutputEspressoBuffers;
@property (nonatomic) {map<std::string stateInputEspressoBuffers;
@property (nonatomic) {map<std::string stateInputEspressoBuffersShape;
@property (nonatomic) NSObject<OS_dispatch_queue> decoderQueue;
@property (nonatomic) CVNLPCaptionDecoderBlock nextBlock;
@property (nonatomic) NSString metricString;
@property (nonatomic) NSString metricCopyString;
@property (nonatomic) {vector<std::string decoderInputNames;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)decoderQueue;
- (id)initWithOptions:modelIndex:runTimeParams:;
- (BOOL)_loadNetwork:modelIndex:;
- (void)buildNetworkForSequenceLength:imageFeatures:;
- (void)copyInputState:;
- (void)copyOutputState:;
- (void)runBlockWithCopyInputBlock:copyOutputBlock:;
- (void)runBlockWithCopyInput:copyOutputBlock:;
- (void)_runBlockWithCopyOutputBlock:;
- (unsigned long long)modelIndex;
- (void)setModelIndex:;
- (id)decoderPlan;
- (void)setDecoderPlan:;
- (id)decoderCtx;
- (void)setDecoderCtx:;
- (id)decoderNet;
- (void)setDecoderNet:;
- (id)attFeatsPlaceholderBlob;
- (void)setAttFeatsPlaceholderBlob:;
- (id)scaleInput;
- (void)setScaleInput:;
- (id)positionInput;
- (void)setPositionInput:;
- (id)maskInput;
- (void)setMaskInput:;
- (id)blockInput;
- (void)setBlockInput:;
- (id)blockOutput;
- (void)setBlockOutput:;
- (id)stateOutputEspressoBuffers;
- (void)setStateOutputEspressoBuffers:;
- (id)stateInputEspressoBuffers;
- (void)setStateInputEspressoBuffers:;
- (id)stateInputEspressoBuffersShape;
- (void)setStateInputEspressoBuffersShape:;
- (void)setDecoderQueue:;
- (id)nextBlock;
- (void)setNextBlock:;
- (id)metricString;
- (void)setMetricString:;
- (id)metricCopyString;
- (void)setMetricCopyString:;
- (id)decoderInputNames;
- (void)setDecoderInputNames:;
@end
