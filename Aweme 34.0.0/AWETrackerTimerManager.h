@interface AWETrackerTimerManager : NSObject
@property (nonatomic) NSMutableDictionary timerDict;
- (void)setTimerForIdentifier:withTimer:;
- (void)invalidateTimerForIdentifier:;
- (BOOL)hasTimerForIdentifier:;
- (id)timerDict;
- (void)setTimerDict:;
- (id)init;
- (void).cxx_destruct;
+ (void)setTimerForIdentifier:withTimer:;
+ (void)invalidateTimerForIdentifier:;
+ (BOOL)hasTimerForIdentifier:;
+ (id)sharedInstance;
@end
