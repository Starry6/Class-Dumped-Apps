@interface BDASifXBridgePreloadAppAdMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString apple_id;
@property (nonatomic) NSString ad_id;
@property (nonatomic) NSString log_extra;
@property (nonatomic) NSString web_url;
@property (nonatomic) NSNumber download_scene;
@property (nonatomic) NSString skan_parameters;
- (id)skan_parameters;
- (id)web_url;
- (id)ad_id;
- (id)download_scene;
- (id)log_extra;
- (void)setAd_id:;
- (void)setApple_id:;
- (void)setDownload_scene:;
- (void)setLog_extra:;
- (void)setSkan_parameters:;
- (void)setWeb_url:;
- (void).cxx_destruct;
- (id)apple_id;
+ (id)JSONKeyPathsByPropertyKey;
@end
