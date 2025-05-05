@interface NSLayoutConstraintParser : NSObject
- (void)dealloc;
- (void)parseOp;
- (double)parseConstant;
- (void)parsePredicateWithParentheses;
- (id)constraints;
- (void)parsePredicate;
- (void)flushWidthConstraints;
- (void)parsePredicateList;
- (void)parse;
- (void)parseConnection;
- (void)finishConstraint;
- (id)initWithFormat:options:metrics:views:;
- (id)parseView;
- (id)rangeOfName;
- (id)description;
- (void)failWithDescription:;
- (void)findContainerView;
+ (id)constraintsWithVisualFormat:options:metrics:views:;
@end
