@interface AXElementGrouper : NSObject
@property (nonatomic) q heuristics;
@property (nonatomic) Q minimumGroupSize;
@property (nonatomic) Q maximumGroupSize;
@property (nonatomic) Q preferredGroupSize;
@property (nonatomic) double thresholdForDeterminingEqualSize;
@property (nonatomic) NSArray transformationPasses;
- (id)init;
- (id)initWithHeuristics:;
- (void)setHeuristics:;
- (long long)heuristics;
- (unsigned long long)minimumGroupSize;
- (unsigned long long)maximumGroupSize;
- (unsigned long long)preferredGroupSize;
- (double)thresholdForDeterminingEqualSize;
- (id)transformationPasses;
- (id)groupElementsInRootGroup:;
- (id)_groupRemovingImpossibleGroups:isRootLevel:;
- (BOOL)_frame:isApproximatelySameSizeAsFrame:;
- (id)_flattenHierarchyForGroup:rootLevel:;
- (id)_applyTransformationPass:toGroup:;
- (id)_applyTransformationPassesToRootGroup:;
- (id)_buildHierarchyForGroup:indexOfKeyboard:;
- (id)_groupablesForItems:;
@end
