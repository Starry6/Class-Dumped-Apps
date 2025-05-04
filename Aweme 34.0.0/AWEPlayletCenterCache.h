@interface AWEPlayletCenterCache : NSObject
+ (BOOL)shouldCacheModel:;
+ (void)updateMaxDiggPlayletModel:;
+ (void)updateMaxDiggPlayletIAAModel:;
+ (long long)playletLocalCacheSeconds;
+ (void)updateMaxDiggPlayletWithModelList:;
+ (id)maxDiggPlayletModel;
+ (id)maxDiggPlayletIAAModel;
@end
