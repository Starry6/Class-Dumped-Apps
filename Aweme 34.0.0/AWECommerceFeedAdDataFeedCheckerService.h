@interface AWECommerceFeedAdDataFeedCheckerService : HTSService
@property (nonatomic) NSObject<OS_dispatch_queue> taskQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkAdModel:data:;
- (id)jsonStringWithModel:;
- (void)trackWithScene:extraParams:awemeModel:;
- (void)checkAdModel:;
- (id)taskQueue;
- (void).cxx_destruct;
- (void)setTaskQueue:;
@end
