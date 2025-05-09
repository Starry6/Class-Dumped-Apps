@interface CHTextLineStraightener : NSObject
@property (nonatomic) NSArray contextStrokes;
@property (nonatomic) NSArray contextResults;
@property (nonatomic) <CHStrokeProvider> strokeProvider;
@property (nonatomic) CHStrokeGroupingResult strokeGroupingResult;
@property (nonatomic) CHStrokeClassificationResult strokeClassificationResult;
@property (nonatomic) NSMutableArray correctionAngles;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)numCharacters;
- (id)strokeProvider;
- (void)setStrokeProvider:;
- (id)strokeClassificationResult;
- (id)strokeGroupingResult;
- (id)initWithContextStrokes:contextResults:strokeGroupingResult:strokeClassificationResult:strokeProvider:;
- (id)majorityScriptId;
- (id)meanRotationCorrectionAngle;
- (id)createTelemetryDictionary:nonTextRatio:;
- (id)straightenWithProgress:shouldCancel:;
- (void)handleRemainingStrokes:contextStrokeGroups:transformations:groupBounds:;
- (id)fontTransferForDrawing:transcription:shouldCancel:;
- (id)fontTransferTransformForLineAtIndex:progress:shouldCancel:;
- (id)textStrokePointTransformationFromAffineTransformation:;
- (id)contextStrokes;
- (void)setContextStrokes:;
- (id)contextResults;
- (void)setContextResults:;
- (void)setStrokeGroupingResult:;
- (void)setStrokeClassificationResult:;
- (id)correctionAngles;
- (void)setCorrectionAngles:;
@end
