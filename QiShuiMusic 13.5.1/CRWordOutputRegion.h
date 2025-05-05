@interface CRWordOutputRegion : CROutputRegion
@property (nonatomic) CRNormalizedPolyline baseline;
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
+ (id)wordWithTextFeature:imageSize:confidenceThresholdProvider:;
+ (id)wordWithTextFeature:candidateIdx:imageSize:confidenceThresholdProvider:;
+ (id)wordWithText:confidence:quad:baselineAngle:;
+ (id)wordWithCharacters:confidence:quad:baselineAngle:;
@end
