@interface CROutputRegion : NSObject
@property (nonatomic) NSArray children;
@property (nonatomic) NSArray candidates;
@property (nonatomic) NSArray transcriptComponents;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString text;
@property (nonatomic) NSString recognizedLocale;
@property (nonatomic) NSInteger confidence;
@property (nonatomic) float rawConfidence;
@property (nonatomic) CRNormalizedQuad boundingQuad;
@property (nonatomic) CRNormalizedPolyline polygon;
@property (nonatomic) CRTextFeature textFeature;
@property (nonatomic) double baselineAngle;
@property (nonatomic) BOOL computesBoundsFromChildren;
@property (nonatomic) BOOL computesTranscriptFromChildren;
@property (nonatomic) NSArray regionsSuitableForDataDetectorOutput;
@property (nonatomic) BOOL shouldComputeBoundsFromChildren;
@property (nonatomic) BOOL shouldComputeTranscriptFromChildren;
@property (nonatomic) NSArray dataDetectorRegions;
@property (nonatomic) NSArray paragraphRegions;
@property (nonatomic) NSArray listRegions;
@property (nonatomic) Q type;
@property (nonatomic) NSArray contentBaselines;
@property (nonatomic) q wordCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)confidence;
- (id)init;
- (void)setConfidence:;
- (id)uuid;
- (void)setText:;
- (id)candidates;
- (void)setUuid:;
- (void)setCandidates:;
- (id)initWithCoder:;
- (id)children;
- (void)setChildren:;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (long long)wordCount;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)polygon;
- (id)quadForTextInCharacterRange:;
- (id)contentRegionOfType:containingTextAtIndex:;
- (id)rangeOfContentRegion:;
- (id)contentsWithTypes:;
- (id)closestContentRegionOfType:toNormalizedPoint:maxPixelDistance:;
- (float)rawConfidence;
- (id)outputRegionWithContentsOfCharacterRange:;
- (id)boundingQuad;
- (id)recognizedLocale;
- (id)selectedLocale;
- (double)baselineAngle;
- (id)outputRegionWithContentsOfQuad:;
- (void)enumerateContentsWithTypes:usingBlock:;
- (void)setBoundingQuad:;
- (id)initWithCRCodableDataRepresentation:version:offset:;
- (id)crCodableDataRepresentation;
- (id)copyWithZone:copyChildren:copyCandidates:;
- (id)contentBaselines;
- (id)joiningDelimiter;
- (id)regionsSuitableForDataDetectorOutput;
- (id)outputRegionWithContentsBetweenStartPoint:endPoint:;
- (void)setShouldComputeBoundsFromChildren:;
- (void)setBaselineAngle:;
- (id)textFeature;
- (void)setTextFeature:;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;
- (id)initWithConfidence:baselineAngle:;
- (id)computeDataDetectorRegions;
- (void)_invalidateTranscript;
- (void)_invalidateTranscriptRecursivelyThrough:;
- (id)transcriptComponents;
- (id)outputRegionWithContentsStartingAtPoint:;
- (id)outputRegionWithContentsEndingAtPoint:;
- (long long)wordCountInCharacterRange:;
- (id)scriptCategoryResults;
- (id)sequenceScriptOutputResult;
- (id)copyIncludingChildren:includingCandidates:;
- (id)decodeOutputsArrayFromData:offset:;
- (void)_overrideSetBoundingQuad:;
- (void)_enumerateRegions:withTypes:recursively:usingBlock:;
- (void)_computeTranscript;
- (unsigned long long)_indexOfNearestChildToPoint:returnFirstMatch:;
- (unsigned long long)_indexOfNearestRegionToPoint:regions:returnFirstMatch:distance:;
- (id)_copyChildrenInRange:;
- (id)_rangeForChild:;
- (void)setRecognizedLocale:;
- (void)setPolygon:;
- (void)setTranscriptComponents:;
- (void)setRawConfidence:;
- (BOOL)shouldComputeBoundsFromChildren;
- (BOOL)shouldComputeTranscriptFromChildren;
- (void)setShouldComputeTranscriptFromChildren:;
- (id)dataDetectorRegions;
- (void)setDataDetectorRegions:;
- (id)paragraphRegions;
- (void)setParagraphRegions:;
- (id)listRegions;
- (void)setListRegions:;
+ (BOOL)supportsSecureCoding;
+ (id)decodableClasses;
+ (id)outputRegionWithCRCodableDataRepresentation:;
+ (id)decodableSubClasses;
+ (Class)decodableClassFromClassName:;
@end
