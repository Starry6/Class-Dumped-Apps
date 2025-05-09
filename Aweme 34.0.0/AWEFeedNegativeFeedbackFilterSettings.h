@interface AWEFeedNegativeFeedbackFilterSettings : NSObject
+ (BOOL)enableFeedNegativeFilter;
+ (BOOL)enableNegativeFeedbackFilterEffectiveFromNextVideo;
+ (unsigned long long)basicRuleFilterDimensionType;
+ (unsigned long long)basicRuleFilterActionType;
+ (long long)basicRuleFIlterVideoTypeTagLevel;
+ (long long)basicRuleFilterVideoTypeV2TagLevel;
+ (id)feedNegativeFilterConfig;
+ (long long)negativeFeedbackInfoActiveTime;
+ (long long)negativeFeedbackFilterRetainMinVideosCount;
+ (unsigned long long)negativeFeedbackFilterRule;
@end
