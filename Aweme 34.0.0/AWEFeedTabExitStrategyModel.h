@interface AWEFeedTabExitStrategyModel : MTLModel
@property (nonatomic) q internalDay;
@property (nonatomic) q triggerLimit;
@property (nonatomic) q exitDay;
@property (nonatomic) q internalHour;
@property (nonatomic) q exitHour;
@property (nonatomic) q exitHoursTriggerLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)triggerLimit;
- (long long)internalDay;
- (long long)exitDay;
- (long long)exitHoursTriggerLimit;
- (long long)internalHour;
- (long long)exitHour;
- (void)setInternalDay:;
- (void)setTriggerLimit:;
- (void)setExitDay:;
- (void)setInternalHour:;
- (void)setExitHour:;
- (void)setExitHoursTriggerLimit:;
+ (id)JSONKeyPathsByPropertyKey;
@end
