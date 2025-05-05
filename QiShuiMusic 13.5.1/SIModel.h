@interface SIModel : NSObject
@property (nonatomic) <SINetworkProtocol> network;
@property (nonatomic) SINetworkConfiguration config;
@property (nonatomic) Q inferenceSignpostEventStart;
@property (nonatomic) Q inferenceSignpostEventEnd;
@property (nonatomic) NSDictionary inputs;
@property (nonatomic) NSDictionary outputs;
- (id)inputs;
- (void)setNetwork:;
- (id)network;
- (void)setConfig:;
- (id)outputs;
- (void).cxx_destruct;
- (void)setInputs:;
- (id)config;
- (id)getConfiguration;
- (void)setOutputs:;
- (id)networkVersion;
- (id)getOutputResolution;
- (id)initWithNetworkConfiguration:;
- (id)getOpsForLibrary;
- (id)getInputResolution;
- (BOOL)switchNetworkConfiguration:;
- (long long)evaluateWithInput:outputs:;
- (unsigned long long)inferenceSignpostEventStart;
- (void)setInferenceSignpostEventStart:;
- (unsigned long long)inferenceSignpostEventEnd;
- (void)setInferenceSignpostEventEnd:;
@end
