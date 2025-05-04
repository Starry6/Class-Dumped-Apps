@interface AWEFeedActivityTimeManager : NSObject
+ (double)getCurrentServerTime;
+ (double)getCurrentServerTimeDefaultLocalTime;
+ (double)getNewCurrentServerTime;
+ (id)getActivityTimer;
@end
