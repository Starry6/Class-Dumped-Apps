@interface NSLayoutYAxisAnchor : NSLayoutAnchor
- (id)constraintEqualToSystemSpacingBelowAnchor:;
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:;
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:;
- (BOOL)validateOtherAttribute:;
- (BOOL)isCompatibleWithAnchor:;
- (id)anchorByOffsettingWithDimension:multiplier:constant:;
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:multiplier:;
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:multiplier:;
- (id)constraintEqualToSystemSpacingBelowAnchor:multiplier:;
- (id)anchorWithOffsetToAnchor:;
- (id)anchorByOffsettingWithDimension:;
- (id)anchorByOffsettingWithConstant:;
- (id)offsetTo:;
- (id)distanceTo:;
- (id)offsetByDimension:times:plus:;
- (id)offsetByDimension:;
- (id)offsetBy:;
@end
