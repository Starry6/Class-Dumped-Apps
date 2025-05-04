@interface AWECloudAlbumDetailAlertComponent : AWECloudAlbumDetailBaseComponent
@property (nonatomic) <AWECloudAlbumDetailDataServiceProtocol> dataService;
@property (nonatomic) NSHashTable alerts;
@property (nonatomic) BOOL albumDeletedAlertShouldShow;
@property (nonatomic) BOOL albumDeletedAlertDidShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataService;
- (void)componentDidLoad;
- (BOOL)canShowAlert;
- (void)componentDidAppear;
- (void)setDataService:;
- (id)createAlertView;
- (id)serviceBinding;
- (void)p_showAlbumDeletedAlertIfNeeded;
- (void)dataDidChangeAlbumWithService:;
- (BOOL)albumDeletedAlertShouldShow;
- (void)setAlbumDeletedAlertShouldShow:;
- (BOOL)albumDeletedAlertDidShow;
- (void)setAlbumDeletedAlertDidShow:;
- (void).cxx_destruct;
- (id)alerts;
- (void)setAlerts:;
@end
