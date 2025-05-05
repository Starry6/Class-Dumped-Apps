@interface CHStrokeGroupingManager : NSObject
@property (nonatomic) NSDictionary groupingStrategiesByIdentifier;
@property (nonatomic) <CHStrokeProvider> strokeProvider;
@property (nonatomic) CHRecognitionSessionResult sessionLastResult;
@property (nonatomic) NSArray locales;
@property (nonatomic) BOOL isInlineContinuousMode;
@property (nonatomic) NSArray textInputTargets;
- (void).cxx_destruct;
- (id)locales;
- (id)textInputTargets;
- (id)strokeProvider;
- (id)strokesForIdentifiers:;
- (id)recognizableDrawingForStrokeGroup:translationVector:originalDrawing:orderedStrokesIDs:rescalingFactor:;
- (id)initWithStrokeProvider:sessionLastResult:locales:isInlineContinuousMode:inlineContinuousModeTargets:;
- (id)updatedGroupingResultByAddingStrokes:removingStrokeIdentifiers:orderedStrokeIdentifiers:strokeClassificationResult:cancellationBlock:;
- (id)_groupsFromClusterResult:strokes:strokeClassificationsByStrokeIdentifier:;
- (id)_greedyCombinationOfGroupingResults:stableStrokeIdentifiers:withCancellationBlock:;
- (id)_simpleDrawingForStrokeGroup:originalDrawing:orderedStrokeIDs:;
- (id)sessionLastResult;
- (BOOL)isInlineContinuousMode;
- (id)groupingStrategiesByIdentifier;
+ (BOOL)_isGroupableNonTextForStrokeClassification:;
@end
