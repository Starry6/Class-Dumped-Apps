@interface AWENaviToolService : NSObject
+ (void)fetchDefaultDressAsyncGetter:withResult:completion:;
+ (void)completeSwitchers:finished:;
+ (void)fetchDefaultDress:withResult:completion:;
+ (void)fetchUsersDefaultDress:withResult:completion:;
@end
