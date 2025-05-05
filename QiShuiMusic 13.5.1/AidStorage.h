@interface AidStorage : NSObject
+ (void)setAid:appName:;
+ (double)aidGenTime:;
+ (id)aidValue:;
+ (void)cleanAid:;
+ (id)instance;
@end
