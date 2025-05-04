@interface AWEECCpsTrackerFactory : NSObject
+ (void)reportWithParams:fromSource:completion:;
+ (void)reportWithUrl:fromSource:;
+ (void)reportWithParams:fromSource:;
+ (BOOL)useOldWay;
+ (BOOL)useNewWay;
+ (void)reportWithUrl:;
+ (void)reportWithParams:;
@end
