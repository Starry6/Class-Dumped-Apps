@interface CRTextOrientationCorrector : NSObject
@property (nonatomic) CRTextOrientationModelV1 model;
@property (nonatomic) CRCTCCVNLPOrientationDecoder decoder;
@property (nonatomic) CRTextOrientationRecognizerConfiguration configuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)model;
- (void)setModel:;
- (void)setConfiguration:;
- (void)setDecoder:;
- (id)configuration;
- (id)decoder;
- (void).cxx_destruct;
- (id)initWithOptions:error:;
- (BOOL)_loadResourcesWithError:;
- (BOOL)correctOrientationOnAllFeatures:sortedFeatures:image:error:;
- (BOOL)correctSequenceScriptOnAllFeatures:sortedFeatures:image:error:;
- (BOOL)decodeOutputForInput:shouldDecodeScriptResult:shouldDecodeOrientationResult:error:;
- (long long)calculateAngleDirectionForInput:error:;
- (void)_applyAngleDirection:feature:;
- (long long)_orientationForBaselineAngle:;
- (long long)_angleDirectionOfBaselineAngle:;
@end
