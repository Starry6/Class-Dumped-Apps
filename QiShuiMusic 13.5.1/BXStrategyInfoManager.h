@interface BXStrategyInfoManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> infoQueue;
@property (nonatomic) NSMutableDictionary modelInfos;
- (id)getStrategyModel:;
- (id)infoQueue;
- (void)registerModel:modelBlock:;
- (void)registerStart;
- (void)setInfoQueue:;
- (void)setModelInfos:;
- (id)init;
- (void).cxx_destruct;
- (id)modelInfos;
+ (id)sharedInstance;
@end
