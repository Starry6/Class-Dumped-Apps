@interface AWEVideoRouterClipService : NSObject
@property (nonatomic) <ACCMVTemplateManagerProtocol> mvTemplateManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startVideoClipViewControllerWithAssetModels:withExtraInfo:processDataBlock:;
- (id)startVideoClipViewControllerWithModel:originPublishModel:extraDict:;
- (id)mvTemplateManager;
- (void)setMvTemplateManager:;
- (void)startVideoEditWithVideoURL:URI:isLocalResource:extraDict:completion:;
- (void)startVideoEditWithVideoURL:URI:isLocalResource:publishViewModel:completion:;
- (void)startVideoEditWithImageURL:URI:extraDict:completion:;
- (void)startVideoWithLocalImageURL:extraParams:completion:;
- (void)startVideoEditWithImageURL:URI:publishViewModel:completion:;
- (void)startVideoWithLocalImageURL:publishViewModel:completion:;
- (void)monitorOpenEditorDurationWithResourceType:duration:success:error:;
- (void)startVideoWithLocalVideoURL:extraParams:completion:;
- (void)startVideoWithLocalVideoURL:publishViewModel:completion:;
- (void)publishViewModelAddBusinessWithInfo:params:;
- (void)publishViewModelAddActivityInfo:params:;
- (void).cxx_destruct;
@end
