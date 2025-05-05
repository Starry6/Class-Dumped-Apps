@interface WebVisiblePosition : NSObject
@property (nonatomic) Q affinity;
- (void)dealloc;
- (unsigned long long)affinity;
- (BOOL)isEditable;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (int)distanceFromPosition:;
- (id)positionOfNextBoundaryOfGranularity:inDirection:;
- (id)positionByMovingInDirection:amount:withAffinityDownstream:;
- (id)positionByMovingInDirection:amount:;
- (id)positionAtStartOrEndOfWord;
- (BOOL)withinTextUnitOfGranularity:inDirectionIfAtBoundary:;
- (id)enclosingTextUnitOfGranularity:inDirectionIfAtBoundary:;
- (BOOL)atBoundaryOfGranularity:inDirection:;
- (void)setAffinity:;
- (BOOL)textDirection;
- (id)_visiblePosition;
- (BOOL)directionIsDownstream:;
- (BOOL)requiresContextForWordBoundary;
- (BOOL)atAlphaNumericBoundaryInDirection:;
- (id)enclosingRangeWithDictationPhraseAlternatives:;
- (id)enclosingRangeWithCorrectionIndicator;
+ (id)_wrapVisiblePosition:;
+ (id)_wrapVisiblePositionIfValid:;
@end
