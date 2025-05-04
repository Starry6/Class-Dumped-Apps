@interface AWESearchMiddleUtility : NSObject
@property (nonatomic) BOOL shouldSkipRecord;
@property (nonatomic) NSDictionary feedTotalDurationDic;
@property (nonatomic) NSArray itemIDArray;
- (void)recordFeedTotalDurationWith:totalTime:;
- (void)clearFeedTotaldurationRecoder;
- (void)setShouldSkipRecord:;
- (id)itemIDArray;
- (void)setItemIDArray:;
- (double)getFeedTotalDurationWith:;
- (BOOL)shouldSkipRecord;
- (id)feedTotalDurationDic;
- (void)setFeedTotalDurationDic:;
- (id)init;
- (void).cxx_destruct;
+ (id)searchMiddlePageTypeStringWith:;
+ (BOOL)p_matchingExpParams:withSettingsParams:;
+ (BOOL)forceUseNativeMode;
+ (BOOL)shouldUseNewTopBarWithType:;
+ (id)obtainTopBarControllerWithType:context:;
+ (BOOL)shouldSetupNewMiddlePageWithType:;
+ (id)obtainMiddlePageViewControllerWithType:routerModel:;
+ (id)shareInstance;
@end
