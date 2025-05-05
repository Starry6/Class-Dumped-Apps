@interface BDASplashDownload : NSObject
@property (nonatomic) NSMutableArray downloadArray;
@property (nonatomic) @? block;
- (void)downloadStaticResourceWithInfo:;
- (void)downloadExtraResourceWithModel:;
- (id)downloadArray;
- (void)downloadCommonResourceWithModel:;
- (void)downloadComplianceResourceWithComplianceArea:expires:netAllow:;
- (void)downloadComplianceResourceWithModuleInfo:expires:netAllow:;
- (void)downloadCoreResourceWithModel:;
- (void)downloadCreativeResourceWithModel:;
- (void)downloadDynamicResourceWithInfo:model:type:;
- (void)downloadModuleResourceWithModel:;
- (void)downloadResourceWithDownloadModel:;
- (void)downloadResourceWithInfo:expires:netAllow:type:;
- (void)downloadResourceWithUrlArray:index:downloadBlock:;
- (id)initWithDownloadBlock:;
- (void)setDownloadArray:;
- (void)startDownloadResource;
- (id)block;
- (void).cxx_destruct;
- (void)setBlock:;
+ (void)publicDownloadResourceWithInfo:expires:type:;
@end
