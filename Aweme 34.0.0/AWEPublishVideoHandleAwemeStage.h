@interface AWEPublishVideoHandleAwemeStage : AWEPublishHandleAwemeStage
@property (nonatomic) NSString uploadVideoUrl;
- (id)uploadVideoUrl;
- (void)saveResourcesToLocal;
- (void)setUploadVideoUrl:;
- (id)initWithModel:uploadVideoUrl:createAwemeResponse:;
- (void).cxx_destruct;
@end
