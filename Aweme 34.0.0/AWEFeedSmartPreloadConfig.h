@interface AWEFeedSmartPreloadConfig : NSObject
+ (id)getPlayTimeMLModel;
+ (long long)getDefaultIndex;
+ (BOOL)enableSmartPreload;
+ (long long)getPlayTimeParamsCount;
+ (id)getBlockTimeLabelIfNeeded;
+ (id)smartPreloadTasksWithPredictLabel:;
+ (id)smartPreloadTasks:;
+ (id)smartPreloadConfig;
+ (id)playtimeMLConfig;
+ (id)getPlayTimeMLURL;
+ (id)smartPreloadStrategy;
+ (id)getLabelIndexMapping;
+ (id)getPreloadPlans;
@end
