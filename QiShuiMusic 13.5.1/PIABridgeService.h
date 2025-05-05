@interface PIABridgeService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> asyncAPIQueue;
@property (nonatomic) PIABiMapTable APIInfoList;
@property (nonatomic) PIABiMapTable APIClassList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)APIClassList;
- (id)APIInfoList;
- (void)setAPIInfoList:;
- (id)asyncAPIQueue;
- (void)executeWithIsMainThread:isSynchronous:block:;
- (id)initService;
- (void)invokeAPI:params:instance:executeResult:;
- (void)registerAPIInfo:instance:;
- (void)registerInstanceAPIInfo:APIClass:;
- (void)setAPIClassList:;
- (void)setAsyncAPIQueue:;
- (void).cxx_destruct;
+ (void)executePrepareServiceTask;
@end
