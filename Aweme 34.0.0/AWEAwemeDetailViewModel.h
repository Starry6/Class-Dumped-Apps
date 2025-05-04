@interface AWEAwemeDetailViewModel : NSObject
@property (nonatomic) NSString taskToken;
@property (nonatomic) BOOL gqActivityTaskRequestFailed;
@property (nonatomic) <AWEHttpTask> gqActivityDoneTask;
@property (nonatomic) BOOL hasGQActivity;
- (id)taskToken;
- (void)setTaskToken:;
- (id)initWithRouterParamDict:;
- (void)postRequestGQActivityTaskDoneIfNeeded;
- (BOOL)hasGQActivity;
- (BOOL)gqActivityTaskRequestFailed;
- (id)gqActivityDoneTask;
- (void)setGqActivityTaskRequestFailed:;
- (void)setGqActivityDoneTask:;
- (void)dealloc;
- (void).cxx_destruct;
@end
