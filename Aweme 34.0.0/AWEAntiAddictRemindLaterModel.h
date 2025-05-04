@interface AWEAntiAddictRemindLaterModel : NSObject
@property (nonatomic) double remindLaterClickTime;
@property (nonatomic) NSDate remindLaterSessionStartTime;
@property (nonatomic) double remindLaterSessionUseDuration;
@property (nonatomic) q delayRemindTime;
- (long long)delayRemindTime;
- (void)setDelayRemindTime:;
- (void)setRemindLaterClickTime:;
- (void)setRemindLaterSessionStartTime:;
- (void)setRemindLaterSessionUseDuration:;
- (double)remindLaterClickTime;
- (id)remindLaterSessionStartTime;
- (double)remindLaterSessionUseDuration;
- (void).cxx_destruct;
+ (id)instanceWithClickTime:sessionStartTime:sessionUseDuration:delayRemindTime:;
@end
