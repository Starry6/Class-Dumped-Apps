@interface AWEPredictPreloadManager : NSObject
@property (nonatomic) AWEPredictPreloadStrategy preloadStrategy;
@property (nonatomic) NSMutableArray actions;
@property (nonatomic) NSArray predictPreloadTasks;
- (void)setPreloadStrategy:;
- (id)preloadStrategy;
- (id)predictPreloadTasks;
- (void)beginCounting;
- (void)endCounting;
- (void)countAction:;
- (void)resetDefaultTasks;
- (void)resetTasksWithMapping:;
- (void)configurePreloadStrategyWithDirectionIndex:;
- (void)setPredictPreloadTasks:;
- (id)init;
- (id)actions;
- (void).cxx_destruct;
- (void)setActions:;
- (void)updateSettings;
+ (id)sharedInstance;
@end
