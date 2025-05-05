@interface CRLineOutputRegion : CRCompositeOutputRegion
@property (nonatomic) Q lineWrappingType;
@property (nonatomic) BOOL shouldWrapToNextLine;
@property (nonatomic) BOOL useLineSeparatorAsLineBreak;
- (unsigned long long)type;
- (long long)wordCount;
- (BOOL)isEqual:;
- (BOOL)shouldWrapToNextLine;
- (id)initWithCRCodableDataRepresentation:version:offset:;
- (id)crCodableDataRepresentation;
- (id)copyWithZone:copyChildren:copyCandidates:;
- (id)contentBaselines;
- (id)joiningDelimiter;
- (BOOL)useLineSeparatorAsLineBreak;
- (void)setUseLineSeparatorAsLineBreak:;
- (unsigned long long)lineWrappingType;
- (void)setLineWrappingType:;
+ (id)lineWithTextFeature:subfeatureType:imageSize:confidenceThresholdProvider:injectSpaceCharacter:;
+ (id)lineWithTextFeature:subfeatureType:imageSize:confidenceThresholdProvider:;
+ (id)lineWithTextFeature:candidateIdx:subfeatureType:imageSize:confidenceThresholdProvider:injectSpaceCharacter:;
+ (id)lineWithText:confidence:quad:baselineAngle:;
+ (id)lineWithWords:confidence:quad:baselineAngle:;
+ (id)lineWithCharacters:confidence:quad:baselineAngle:;
+ (id)_lineWithChildren:confidence:quad:baselineAngle:;
@end
