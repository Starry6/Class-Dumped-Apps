@interface NSErrorVariableConstraint : NSLayoutConstraint
- (void)dealloc;
- (int)nsis_orientationHintForVariable:;
- (BOOL)_lowerIntoExpression:reportingConstantIsRounded:;
- (id)initWithVariable:value:;
- (id)constrainedConstraint;
@end
