@interface AWESearchMediumCollectManager : NSObject
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) <AWEHttpTask> currentTask;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)refreshMediumCollectWithID:withStatus:completion:;
- (id)currentTask;
- (void)setCurrentTask:;
- (void).cxx_destruct;
@end
