@interface AWECommerceTaskMonitorService : HTSService
@property (nonatomic) NSNumber currentCid;
@property (nonatomic) NSString currentLogExtra;
@property (nonatomic) NSString currentOpenUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithAwemeModel:;
- (void)resetWithAwemeModel:;
- (BOOL)blockAbnormalTaskIfNeedWithAweme:;
- (BOOL)enableCheckAwemeModel;
- (void)routerDidFailTransferingWithURLString:errorMessage:;
- (void)routerDidFailRetrievingViewControllerForURLString:errorMessage:;
- (id)getManagerSettings;
- (void)verifyIsAbnormalWithAweme:;
- (void)setCurrentCid:;
- (void)setCurrentLogExtra:;
- (void)setCurrentOpenUrl:;
- (BOOL)monitorExpand;
- (id)currentOpenUrl;
- (id)currentCid;
- (id)currentLogExtra;
- (void)trackRouterFailWithURL:errorMessage:;
- (void)trackGenerateViewControllerFailedWithURL:errorMessage:;
- (id)init;
- (void).cxx_destruct;
@end
