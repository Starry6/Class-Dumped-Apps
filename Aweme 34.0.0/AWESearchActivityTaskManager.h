@interface AWESearchActivityTaskManager : NSObject
+ (void)startSearchShowTask:completion:;
+ (void)startResultPageCoinTask:completion:;
+ (void)submitResultPageCoinTask:completion:;
@end
