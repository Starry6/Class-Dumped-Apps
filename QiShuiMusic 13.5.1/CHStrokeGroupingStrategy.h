@interface CHStrokeGroupingStrategy : NSObject
@property (nonatomic) <CHStrokeProvider> strokeProvider;
@property (nonatomic) NSString strategyIdentifier;
- (void).cxx_destruct;
- (id)strokeProvider;
- (id)initWithStrokeProvider:;
- (id)strategyIdentifier;
- (id)strokesForIdentifiers:;
- (void)getFirstStrokeIdentifier:lastStrokeIdentifier:inGroup:addingStrokeIdentifiers:removingStrokeIdentifiers:;
- (id)strokeGroupFromGroup:addingStrokes:;
- (id)updatedGroupingResult:byAddingStrokes:removingStrokeIdentifiers:stableStrokeIdentifiers:allSubstrokesByStrokeIdentifier:withCancellationBlock:;
- (id)recognizableDrawingForStrokeGroup:translationVector:originalDrawing:orderedStrokesIDs:rescalingFactor:;
@end
