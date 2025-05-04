@interface AWESearchAdAppointmentService : HTSService
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) q sceneType;
@property (nonatomic) AWEOriginalAdModel adModel;
@property (nonatomic) BOOL didConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adModel;
- (void)setAdModel:;
- (BOOL)didConfig;
- (void)setDidConfig:;
- (void)handleAppointmentClickWithGroupID:appointmentID:sceneType:adModel:;
- (void)handleAppointmentNotificationForLynx:;
- (void)handleAppointmentErrorWithAdModel:scene:error:;
- (void)handleAppointmentResult:scene:;
- (void)commonConfigsIfNeeded;
- (void)configAdModel:;
- (void)resetData;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (long long)sceneType;
- (void)setSceneType:;
@end
