@interface PGProcessAssertion : NSObject
- (BOOL)_isInvalidated;
- (id)initWithExplanation:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)acquireWithTarget:domainAttribute:;
- (void)_setInvalidated:;
+ (id)pipVisibleDomainAttribute;
+ (id)transientTaskDomainAttribute;
+ (id)transientTaskAssertionForProcessWithIdentifier:explanation:;
+ (id)pipVisibleAssertionForProcessWithIdentifier:explanation:;
+ (id)assertionWithDomainAttribute:forProcessWithIdentifier:explanation:;
@end
