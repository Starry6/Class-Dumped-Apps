@interface CRCharacterOutputRegion : CROutputRegion
@property (nonatomic) CRNormalizedPolyline baseline;
- (id)init;
- (id)baseline;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setBaseline:;
- (id)initWithCRCodableDataRepresentation:version:offset:;
- (id)crCodableDataRepresentation;
- (id)copyWithZone:copyChildren:copyCandidates:;
- (id)contentBaselines;
- (id)joiningDelimiter;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;
+ (id)characterWithTextFeature:imageSize:confidenceThresholdProvider:;
+ (id)characterWithTextFeature:candidateIdx:imageSize:confidenceThresholdProvider:;
+ (id)characterWithText:confidence:quad:baselineAngle:;
@end
