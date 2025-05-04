@interface AWEInteractiveNoticeTrackerManager : NSObject
+ (void)postTrackerEvent:withParams:;
+ (void)postCombineEvent:withParams:;
+ (void)p_trackEvent:withParams:;
+ (void)p_trackLog:withParams:;
+ (id)p_getStringFromDictionary:needBrace:;
+ (id)p_getStringFromArray:;
+ (void)postLogEvent:withParams:;
@end
