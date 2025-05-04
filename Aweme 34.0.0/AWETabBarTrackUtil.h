@interface AWETabBarTrackUtil : NSObject
+ (id)safeString:;
+ (void)logTabBarColorProgress:businessID:;
+ (id)businessIDForClass:selector:;
+ (id)appendExtraInfo:toBusinessID:;
+ (id)safeStringFromClass:;
+ (id)safeStringFromSelector:;
+ (BOOL)shouldLogTabBarColorProgress:businessID:;
+ (BOOL)tabBarColorLogEnabled;
+ (double)tabBarColorLogInterval;
+ (id)businessIDForTransition:context:;
+ (id)businessIDForClassName:funcName:;
@end
