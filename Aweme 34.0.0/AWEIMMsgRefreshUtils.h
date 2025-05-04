@interface AWEIMMsgRefreshUtils : NSObject
+ (BOOL)isSupportRefreshHandler:;
+ (id)getCellWithMessage:handler:;
+ (double)getRefreshIntervalWithType:;
@end
