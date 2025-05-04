@interface AWEECMallSubscribedLiveStatusManager : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) <AWELiveCheckDataManagerService> liveCheckService;
@property (nonatomic) NSDictionary liveData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveData;
- (void)setLiveData:;
- (id)liveCheckService;
- (void)onLiveUpdateReceive:PageType:;
- (void)subscribedLiveStatusChangeWithLiveData:statusChangeBlock:;
- (void)setLiveCheckService:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
