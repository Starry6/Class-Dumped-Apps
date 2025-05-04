@interface AWEGenericTemplatePreparationDownloadMiddleware : NSObject
@property (nonatomic) AWEGenericTemplateApplierContext context;
@property (nonatomic) ACCSideslipPanelUniTemplateDownloadManager downloadManager;
@property (nonatomic) NSMutableDictionary configMapping;
@property (nonatomic) NSMutableDictionary completionMapping;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)uniTemplateDownloader:templateModel:progressDidChange:;
- (void)uniTemplateDownloader:didFinishDownload:;
- (void)uniTemplateDownloader:didFailDownload:error:;
- (void)processTemplate:applyConfig:completion:;
- (id)configMapping;
- (id)completionMapping;
- (void)setConfigMapping:;
- (void)setCompletionMapping:;
- (id)downloadManager;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDownloadManager:;
- (id)context;
@end
