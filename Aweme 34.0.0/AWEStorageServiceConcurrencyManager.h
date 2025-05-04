@interface AWEStorageServiceConcurrencyManager : NSObject
@property (nonatomic) q currentConcurrentCount;
@property (nonatomic) q maxConcurrentCount;
- (void)startTask;
- (void)setMaxConcurrentCount:;
- (long long)currentConcurrentCount;
- (void)setCurrentConcurrentCount:;
- (id)init;
- (void)finishTask;
- (long long)maxConcurrentCount;
+ (id)sharedInstance;
@end
