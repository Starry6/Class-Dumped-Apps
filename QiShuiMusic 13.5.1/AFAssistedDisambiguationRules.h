@interface AFAssistedDisambiguationRules : NSObject
@property (nonatomic) Q decisionDepth;
@property (nonatomic) double decisionAge;
@property (nonatomic) double decisionThreshold;
@property (nonatomic) Q maxPersistenceDepth;
@property (nonatomic) double maxPersistenceAge;
- (unsigned long long)decisionDepth;
- (double)decisionAge;
- (double)decisionThreshold;
- (double)weightForEvent:;
- (unsigned long long)maxPersistenceDepth;
- (double)maxPersistenceAge;
+ (id)defaultRules;
@end
