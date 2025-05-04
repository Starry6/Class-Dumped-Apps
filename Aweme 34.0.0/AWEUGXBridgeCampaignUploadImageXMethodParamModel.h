@interface AWEUGXBridgeCampaignUploadImageXMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString imageData;
@property (nonatomic) NSString reportUrl;
@property (nonatomic) BDXBridgeCampaignUploadImageXAuthConf authConf;
@property (nonatomic) NSDictionary imageConf;
@property (nonatomic) NSDictionary imageRequestParams;
@property (nonatomic) NSDictionary reportData;
- (id)reportUrl;
- (void)setReportUrl:;
- (id)authConf;
- (id)imageConf;
- (id)imageRequestParams;
- (void)setAuthConf:;
- (void)setImageConf:;
- (void)setImageRequestParams:;
- (void)setReportData:;
- (id)imageData;
- (void)setImageData:;
- (void).cxx_destruct;
- (id)reportData;
+ (id)requiredKeyPaths;
+ (id)authConfJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
