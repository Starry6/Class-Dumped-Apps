@interface CHTopDownStrokeGroupingStrategy : CHStrokeGroupingStrategy
@property (nonatomic) NSArray textInputTargets;
- (void).cxx_destruct;
- (id)textInputTargets;
- (id)strategyIdentifier;
- (id)updatedGroupingResult:byAddingStrokes:removingStrokeIdentifiers:stableStrokeIdentifiers:allSubstrokesByStrokeIdentifier:withCancellationBlock:;
- (id)recognizableDrawingForStrokeGroup:translationVector:originalDrawing:orderedStrokesIDs:rescalingFactor:;
- (id)initWithStrokeProvider:locale:textInputTargets:;
- (id)_strokeIdentifersFromStrokes:;
- (id)_strokeGroupWithStrokes:orderedStrokeIdentifiers:previousGroups:shouldSearchForStableIdentifier:;
- (double)_estimateSplitScore:withTextInputTargets:arcLengthsByStrokeIdentifier:;
- (double)_accumulatedTimeDifferences:;
- (id)_findMostProbableTextInputTarget:forGroupBounds:outOverlap:outDistance:;
- (BOOL)_isSplitAcceptable:arcLengthsByStrokeIdentifier:outRejectionReason:;
@end
