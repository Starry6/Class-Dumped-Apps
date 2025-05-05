@interface CRCTCCVNLPOrientationDecoder : NSObject
@property (nonatomic) CRTextSequenceRecognizerModel model;
@property (nonatomic) NSOrderedSet characterObservations;
@property (nonatomic) BOOL decodeWithCombinedOrientationScriptModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
- (id)characterObservations;
- (id)initWithConfiguration:model:error:;
- (BOOL)decodeOutput:imageSize:error:;
- (BOOL)shouldDecodeWithLM;
- (BOOL)decodeOutput:imageSize:shouldDecodeScriptResult:shouldDecodeOrientationResult:error:;
- (id)_buildActivationMatrices:;
- (void)_create2DArraysFromInputArray:classSize:outputArrays:;
- (BOOL)_decodeFeaturesWithInfo:activations:shouldDecodeScriptResult:shouldDecodeOrientationResult:;
- (BOOL)decodeWithCombinedOrientationScriptModel;
@end
