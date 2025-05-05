@interface VNDocumentObservation : VNDetectedObjectObservation
@property (nonatomic) NSArray blocks;
@property (nonatomic) VNRecognizedTextBlockObservation title;
@property (nonatomic) NSString transcript;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)getTitle;
- (BOOL)isEqual:;
- (id)blocksWithTypes:inRegion:;
- (id)vn_cloneObject;
- (id)getDataDetectorResults:;
- (id)initWithTopLevelRegion:requestRevision:;
- (id)_textBlockObservationsFromRegion:requestRevision:;
- (id)getTranscript;
- (id)boundingBoxForTextRange:error:;
- (id)rangeOfTextBlock:;
- (id)rangeOfTextBlockObservation:;
- (id)textBlockOfTypes:containingTextAtIndex:;
- (id)getBlocks;
- (id)textBlockWithCharacterRange:;
- (id)closestTextBlockOfTypes:toPoint:maximumPixelDistance:;
- (id)getCRDocumentOutputRegion;
- (BOOL)shouldReprocessDocument;
+ (BOOL)supportsSecureCoding;
@end
