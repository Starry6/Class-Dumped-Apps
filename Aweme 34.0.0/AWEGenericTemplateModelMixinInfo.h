@interface AWEGenericTemplateModelMixinInfo : NSObject
@property (nonatomic) CKGenericTemplateModel hostTemplateModel;
@property (nonatomic) AWEGenericTemplateModelMixinDownloadInfo downloadInfo;
@property (nonatomic) AWEGenericTemplateModelMixinTemplateInfo templateInfo;
@property (nonatomic) <ACCMusicModelProtocol> templateMusic;
@property (nonatomic) BOOL isTemplateMusicDownloaded;
@property (nonatomic) BOOL isFromAIGCAsyncRecovery;
@property (nonatomic) BOOL isAIGCI2TTemplate;
@property (nonatomic) BOOL isAIGCAsyncTemplate;
- (id)templateInfo;
- (void)setIsFromAIGCAsyncRecovery:;
- (BOOL)isFromAIGCAsyncRecovery;
- (void)setIsAIGCAsyncTemplate:;
- (id)templateMusic;
- (void)setTemplateMusic:;
- (BOOL)isTemplateMusicDownloaded;
- (BOOL)isAIGCI2TTemplate;
- (void)setIsAIGCI2TTemplate:;
- (BOOL)isAIGCAsyncTemplate;
- (id)hostTemplateModel;
- (void)setHostTemplateModel:;
- (void).cxx_destruct;
- (void)setTemplateInfo:;
- (id)downloadInfo;
- (void)setDownloadInfo:;
@end
