@interface CMHealthTracker : NSObject
@property (nonatomic) CMHealthTrackerInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)queryMetMinutesFromDate:toDate:handler:;
- (void)queryVO2MaxInputsFromRecord:handler:;
+ (BOOL)isMetMinutesAvailable;
+ (long long)isAuthorizedForMetMinutes;
+ (BOOL)isVO2MaxDataAvailable;
+ (long long)isAuthorizedForVO2MaxData;
@end
