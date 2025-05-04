@interface AWEFansLocalUserHelper : NSObject
+ (id)currentLoginUser;
+ (long long)getLastFullTime;
+ (id)lastFullTimeKey;
+ (id)lastCursorKey;
+ (id)lastFullFailedKey;
+ (void)fetchUserDataWithContext:completion:;
+ (void)setLastFullTimeWithTime:;
+ (long long)getLastCursor;
+ (void)setLastCursorWithTime:;
+ (BOOL)isLastFullFailed;
+ (void)setIsLastFullFailed:;
@end
