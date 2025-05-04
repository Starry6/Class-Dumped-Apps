@interface AWEVideoPublishDraftTempProductModel : MTLModel
@property (nonatomic) NSString publishTaskId;
@property (nonatomic) NSURL uploadMediaURL;
@property (nonatomic) NSURL watermarkVideoURL;
@property (nonatomic) NSDictionary uploadMediaURLDic;
@property (nonatomic) NSDictionary watermarkVideoURLDic;
- (void)setUploadMediaURL:;
- (id)publishTaskId;
- (id)uploadMediaURL;
- (void)setUploadMediaURL:autoRemove:;
- (id)watermarkVideoURL;
- (void)setWatermarkVideoURL:;
- (void)setPublishTaskId:;
- (id)uploadMediaURLDic;
- (void)setUploadMediaURLDic:;
- (id)watermarkVideoURLDic;
- (void)setWatermarkVideoURLDic:;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (void)destroy;
- (void)synchronize;
+ (void)destroyWithTaskId:;
+ (id)restoreWithTaskId:;
+ (id)fixSandboxPrefixWithURL:;
+ (id)cacheKey:;
@end
