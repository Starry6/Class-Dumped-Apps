@interface CPAnalyticsCompoundEventMatcher : CPAnalyticsEventMatcher
@property (nonatomic) Q type;
@property (nonatomic) NSArray subEventMatchers;
- (id)initWithType:subEventMatchers:;
- (id)init;
- (BOOL)doesMatch:;
- (unsigned long long)type;
- (id)subEventMatchers;
- (void).cxx_destruct;
+ (id)andEventMatcherWithSubEventMatchers:;
+ (id)orEventMatcherWithSubEventMatchers:;
+ (id)notEventMatcherWithSubEventMatcher:;
@end
