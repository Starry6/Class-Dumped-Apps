@interface AWEAwemeDetailPreloadManager : NSObject
+ (double)cellPreloadDelay;
+ (BOOL)isDetailFeedCellPreload;
+ (long long)scrollContinuousDirectionCount;
+ (long long)cellPreloadDelayCount;
+ (BOOL)cellPreloadOptimizeEnable:;
+ (id)closeClassNames;
@end
