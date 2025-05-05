@interface CRCTCTextDecoderV1 : NSObject
@property (nonatomic) CRNeuralRecognizerConfiguration configuration;
@property (nonatomic) CRTextSequenceRecognizerModel model;
@property (nonatomic) CRCtcBeamSearch beamSearch;
@property (nonatomic) CRRegex regExpressions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)model;
- (void)setModel:;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)beamSearch;
- (void)setBeamSearch:;
- (id)initWithConfiguration:model:error:;
- (BOOL)decodeOutput:imageSize:error:;
- (BOOL)shouldDecodeWithLM;
- (void)maxDecodeFeaturesWithInfo:activationMaps:imageSize:;
- (BOOL)lmDecodeFeaturesWithInfo:activationMaps:imageSize:error:;
- (id)correctLMDecodingWithRegex:noLMDecoding:;
- (id)regExpressions;
- (void)setRegExpressions:;
@end
