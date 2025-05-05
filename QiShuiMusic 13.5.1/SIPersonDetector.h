@interface SIPersonDetector : NSObject
- (void).cxx_destruct;
- (id)getConfiguration;
- (id)networkVersion;
- (id)getOutputResolution;
- (id)initWithNetworkConfiguration:;
- (id)getInputResolution;
- (BOOL)switchNetworkConfiguration:;
- (long long)evaluateImage:;
- (long long)copyOutput:;
@end
