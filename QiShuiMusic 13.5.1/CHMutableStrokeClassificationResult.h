@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithStrokeClassificationsByStrokeIdentifier:substrokesByStrokeIdentifier:nontextCandidates:;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (id)nontextCandidates;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:skippingCandidatesWithStrokeIdentifier:;
- (void)updateByRemovingStrokeIdentifier:withRemovedAndClutterStrokeIDs:;
- (void)updateByTransitionedClutterStrokeIdentifier:withRemovedAndClutterStrokeIDs:;
- (void)updateByAddingNonClutterStroke:withAllStrokes:forceText:;
- (void)updateByAddingNonClutterStroke:withClassification:;
- (void)updateByAddingClutterStroke:;
@end
