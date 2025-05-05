@interface BDADetailTracker : NSObject
+ (void)clearCrimeScene;
+ (void)eventV3:params:;
+ (void)eventV3:params:isDoubleSending:;
+ (void)commitCrime;
+ (void)eventData:;
+ (void)goods_back:;
+ (void)goods_click:;
+ (void)applicationDidBecomeActive:;
@end
