@interface AWECutSameDataExporter : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) AWECutSameDataExporterInputModel inputModel;
@property (nonatomic) NSObject<OS_dispatch_group> saveFramsToUploadGroup;
- (id)publishModel;
- (void)setPublishModel:;
- (void)p_addSelectedAssetsCount;
- (void)p_fetchAssetsLocationInfos;
- (void)p_addEditedTextsForAudit;
- (void)callbackForCompletion:;
- (void)exportCutSameDataWithPublishModel:inputModel:completion:;
- (id)p_saveOriginFramesImage:;
- (id)saveFramsToUploadGroup;
- (void)setSaveFramsToUploadGroup:;
- (void).cxx_destruct;
- (id)inputModel;
- (void)setInputModel:;
@end
