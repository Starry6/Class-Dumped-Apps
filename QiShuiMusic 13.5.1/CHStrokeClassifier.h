@interface CHStrokeClassifier : NSObject
@property (nonatomic) <CHStrokeProvider> strokeProvider;
@property (nonatomic) CHStrokeClassificationResult strokeClassificationLastResult;
@property (nonatomic) BOOL textOnly;
- (void).cxx_destruct;
- (BOOL)textOnly;
- (id)strokeProvider;
- (id)initWithStrokeProvider:strokeClassificationLastResult:textOnly:;
- (id)updatedStrokeClassificationResultByAddingStrokes:removingStrokeIdentifiers:clutterFilter:affectedClutterStrokeIDs:cancellationBlock:;
- (BOOL)changeableClassificationByRefinement:stroke:;
- (long long)_tileIndexForYPosition:tileHeight:;
- (id)refineStrokeClassificationResultUsingClassificationResult:strokeClassificationModel:sortedAddedStrokes:removedStrokeIdentifiers:cancellationBlock:;
- (id)strokeClassificationLastResult;
+ (id)nonTextCandidateForStroke:withSubstrokes:;
+ (double)containerSupportForPoints:withBounds:;
@end
