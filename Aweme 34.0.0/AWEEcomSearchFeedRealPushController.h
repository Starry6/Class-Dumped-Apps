@interface AWEEcomSearchFeedRealPushController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEEcomSearchFeedPitayaResponse pitayaInfo;
@property (nonatomic) AWEEcomSearchFeedInsertResponseModel responseModel;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) NSMutableArray hunterVideoCacheKeyList;
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
- (void)setPitayaInfo:;
- (id)pitayaInfo;
- (void)subscribeBridgeEvent;
- (void)unsubscribeBridgeEvent;
- (void)registerPitayaService;
- (void)trackPitayaInsertResult:code:msg:awemeId:;
- (void)insertPitayaCard:pitayaTraceId:;
- (id)hunterVideoCacheKeyList;
- (void)requsetInsertCardWithPtyParams:pitayaTraceId:completion:;
- (void)setHunterVideoCacheKeyList:;
- (BOOL)isLoading;
- (void)dealloc;
- (id)subscriber;
- (void)setSubscriber:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setIsLoading:;
- (id)responseModel;
- (void)setResponseModel:;
@end
