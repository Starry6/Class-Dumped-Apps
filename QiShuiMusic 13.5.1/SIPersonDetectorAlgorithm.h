@interface SIPersonDetectorAlgorithm : NSObject
- (void).cxx_destruct;
- (void)runWithInput:output:;
- (void)runWithInput:output:networkConfiguration:;
- (id)initWithComputeEngine:andNetworkConfiguration:;
- (id)getInputResolution;
- (id)initWithComputeEngine:andNetworkConfiguration:useE5RT:;
+ (BOOL)supportsANE;
@end
