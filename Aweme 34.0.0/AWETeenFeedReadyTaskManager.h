@interface AWETeenFeedReadyTaskManager : NSObject
@property (nonatomic) BOOL isFeedReady;
@property (nonatomic) NSMutableArray taskArray;
- (void)executeTask;
- (id)taskArray;
- (void)setTaskArray:;
- (void)setIsFeedReady:;
- (BOOL)isFeedReady;
- (id)init;
- (void).cxx_destruct;
- (void)registerTask:;
+ (id)sharedInstanced;
@end
