@interface IESLiveOfflineManager : NSObject
@property (nonatomic) NSMutableDictionary runningRequests;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)runningRequests;
- (id)_gurdAccessKey;
- (id)_liveFalconPatterns;
- (void)cancelLazyResourceRequest;
- (void)configGeckoAndFalcon;
- (id)dataForPath:channel:;
- (BOOL)enableCancelLazyRequest;
- (id)geckoKey;
- (void)registerCustomInterceptor;
- (void)setRunningRequests:;
- (void)updatePuzzleFalconPatterns;
- (id)init;
- (id)_groupName;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
