@interface AWEMomentsPreviewDataProvider : NSObject
@property (nonatomic) NSArray templateModelArray;
@property (nonatomic) NSArray segInfoArray;
- (void)cancelCurrentTask;
- (id)templateModelArray;
- (id)segInfoArray;
- (void)recordAudioRange:publishModel:music:;
- (void)updateWorksAssetWithPublishModel:templateModelIndex:aiMomentModel:progress:downloadCompletion:completion:error:;
- (void)recoveryDataWithMVTemplateModel:materialAssetModel:publishModel:completion:error:;
- (void)recoveryDataWithMVTemplateModel:assetModel:publishModel:completion:error:;
- (void)generateDataUsingAiMomentModel:publishModel:progress:completion:error:;
- (void)templateResourcePreload;
- (void)setTemplateModelArray:;
- (void)setSegInfoArray:;
- (void).cxx_destruct;
@end
