@interface CMMotionActivityManager : NSObject
- (id)init;
- (void)stopActivityUpdates;
- (void)dealloc;
- (void)startActivityUpdatesToQueue:withHandler:;
- (void)stopActivityLiteUpdates;
- (void)startActivityLiteUpdatesToQueue:withHandler:;
- (void)_handleQueryResponse:onQueue:withHandler:;
- (void)queryActivityStartingFromDate:toDate:toQueue:withHandler:;
+ (long long)authorizationStatus;
+ (BOOL)isActivityAvailable;
+ (BOOL)isActivityLiteAvailable;
@end
