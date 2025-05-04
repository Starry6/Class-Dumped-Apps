@interface AWEECShopLiveRoomAccessServiceManager : NSObject
@property (nonatomic) NSMutableDictionary ecomBusinessParams;
@property (nonatomic) {UIEdgeInsets=dddd} containerInsets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomModel;
- (id)serviceConfig;
- (void)setContainerInsets:;
- (void)updateEnterMethod:;
- (id)ecomBusinessParams;
- (void)setEcomBusinessParams:;
- (void)setupAccessServiceConfig;
- (void)updateSchemaQueryParams:;
- (void)updateContextParams:;
- (void)updateProfileView:backView:tipsView:bottomBarView:containerTopOffset:backLeftOffset:;
- (double)liveStatusHeight;
- (id)initWithAccessService:;
- (void).cxx_destruct;
- (id)containerInsets;
@end
