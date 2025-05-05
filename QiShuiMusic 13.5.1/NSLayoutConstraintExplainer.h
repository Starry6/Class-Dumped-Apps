@interface NSLayoutConstraintExplainer : NSObject
@property (nonatomic) NSMapTable satisfactionChanges;
@property (nonatomic) NSMapTable priorities;
@property (nonatomic) NSArray mutuallyExclusiveConstraints;
- (void)dealloc;
- (id)priorities;
- (id)description;
- (id)initWithConstraint:;
- (void)_freezeErrorVariable:forcingZeroValue:inEngine:accumulatingConstraints:andMutuallyExclusiveConstraints:;
- (void)recalculateExplanation;
- (unsigned long long)_satisfactionChangeCount:withResults:;
- (id)requireConstraint:;
- (id)relaxConstraint:;
- (id)freezeConstraint:;
- (id)thawConstraint:;
- (id)satisfactionChanges;
- (void)setSatisfactionChanges:;
- (void)setPriorities:;
- (id)mutuallyExclusiveConstraints;
- (void)setMutuallyExclusiveConstraints:;
@end
