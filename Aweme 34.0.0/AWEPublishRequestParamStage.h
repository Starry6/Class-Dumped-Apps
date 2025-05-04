@interface AWEPublishRequestParamStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) BOOL publishClicked;
@property (nonatomic) BOOL forceUpdateAuthKey;
@property (nonatomic) AWEResourceUploadParametersResponseModel uploadParamsCache;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)setFlowModel:;
- (id)flowModel;
- (id)uploadParamsCache;
- (void)setUploadParamsCache:;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (BOOL)forceUpdateAuthKey;
- (void)setForceUpdateAuthKey:;
- (void)p_runWithParams:;
- (BOOL)publishClicked;
- (void)setPublishClicked:;
- (id)init;
- (void)run;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
