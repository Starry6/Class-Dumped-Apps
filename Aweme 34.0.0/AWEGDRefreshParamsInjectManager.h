@interface AWEGDRefreshParamsInjectManager : NSObject
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSString handle;
@property (nonatomic) NSMutableArray injectorList;
@property (nonatomic) @? reporter;
- (id)getDomainKeyBySession;
- (id)initWithSessionID:reporter:;
- (id)getRefreshRequestParams;
- (void)setInjectorList:;
- (void)subscribeLifeStorageGDRefreshParamsChangeWithSessionID;
- (void)unsubscribeLifeStorageGDRefreshParamsChange;
- (id)injectorList;
- (unsigned long long)comparePreItem:withAnotherItem:;
- (void)handleComponentListChanged:;
- (void)addRefreshParamsInjector:;
- (void)setSessionID:;
- (void)dealloc;
- (void)setHandle:;
- (id)handle;
- (id)sessionID;
- (void).cxx_destruct;
- (void)setReporter:;
- (id)reporter;
@end
