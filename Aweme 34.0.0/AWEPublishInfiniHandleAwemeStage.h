@interface AWEPublishInfiniHandleAwemeStage : AWEPublishHandleAwemeStage
@property (nonatomic) NSDictionary imageInfos;
@property (nonatomic) NSArray uploadVideoUrls;
@property (nonatomic) NSDictionary imageResouceDic;
- (void)saveResourcesToLocal;
- (id)imageResoucesWithFlowModel:;
- (id)videoResourcesWithFlowModel:;
- (id)resourcesWithFlowModel:;
- (id)uploadVideoUrls;
- (void)setUploadVideoUrls:;
- (id)imageResouceDic;
- (void)setImageResouceDic:;
- (void).cxx_destruct;
- (id)imageInfos;
- (void)setImageInfos:;
@end
