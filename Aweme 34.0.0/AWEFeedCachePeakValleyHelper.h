@interface AWEFeedCachePeakValleyHelper : NSObject
@property (nonatomic) NSArray periodLimitArray;
- (id)transToMinString:;
- (id)transPeakTimeType:;
- (BOOL)checkDownloadPeriodValid;
- (id)periodLimitArray;
- (void)setPeriodLimitArray:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
