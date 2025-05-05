@interface CPAnalyticsCoreAnalyticsHelper : NSObject
+ (void)analyticsSendEventLazy:payload:;
+ (void)sendCoreAnalyticsEvent:withPayload:shouldSanitize:;
+ (BOOL)isValidCoreAnalyticsValueType:;
+ (id)caCompatiblePayloadKey:;
+ (id)buildCACompatiblePayload:;
@end
