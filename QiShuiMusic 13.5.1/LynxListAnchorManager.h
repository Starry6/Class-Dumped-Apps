@interface LynxListAnchorManager : NSObject
@property (nonatomic) BOOL isVerticalLayout;
@property (nonatomic) q numberOfColumns;
- (long long)closestAttributesToLowerVisibleBound:inColumn:;
- (long long)closestAttributesToUpperVisibleBound:inColumn:;
- (long long)findAnchorCell:anchorPolicies:layoutInfo:;
- (long long)findAnchorCellForRemoval:anchorPolicies:layoutInfo:deleteIndexes:;
- (id)findBottomMostIndexInArray:skipRemoved:;
- (id)findTopMostIndexInArray:skipRemoved:;
- (long long)fromBegin:anchorPolicies:layoutInfo:;
- (long long)fromBeginForRemoval:anchorPolicies:layoutInfo:deleteIndexes:;
- (long long)fromEnd:anchorPolicies:layoutInfo:;
- (long long)fromEndForRemoval:anchorPolicies:layoutInfo:deleteIndexes:;
- (long long)generateAnchorCellInBottomSide:layoutInfo:;
- (long long)generateAnchorCellInUpperSide:layoutInfo:;
- (long long)generateAnchorCellInUpperSide:layoutInfo:deleteIndexes:;
- (long long)indexOf:inColumn:low:high:;
- (BOOL)isVerticalLayout;
- (double)orientationBottomOfCell:;
- (double)orientationTopOrigin:;
- (void)setIsVerticalLayout:;
- (id)init;
- (long long)numberOfColumns;
- (void)setNumberOfColumns:;
@end
