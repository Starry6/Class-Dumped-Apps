@interface AWEPzContinuousDisplayUnconsumedDownGradeLimitStrategy : AWEPzContinuousDisplayUnconsumedTimingStrategy
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)postDownGradeEventToComponent:;
- (void)postEventToComponent:;
- (BOOL)setupDataModelWithConfig:;
@end
