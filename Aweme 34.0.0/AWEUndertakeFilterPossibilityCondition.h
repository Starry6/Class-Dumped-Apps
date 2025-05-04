@interface AWEUndertakeFilterPossibilityCondition : AWEUndertakeFilterBaseCondition
@property (nonatomic) Q possibility;
@property (nonatomic) q conditionStatus;
- (long long)statusWithData:extraInfo:;
- (id)initWithPossibility:;
- (long long)conditionStatus;
- (unsigned long long)possibility;
- (void)setConditionStatus:;
- (void)setPossibility:;
- (id)init;
@end
