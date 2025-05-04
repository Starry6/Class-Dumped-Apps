@interface AWECampaignKTimer : NSObject
+ (void)cancelTimerTaskWithIdentifier:;
+ (id)executeTask:delay:interval:repeats:async:;
@end
