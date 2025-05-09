@interface AWECardOCRConfig : MTLModel
@property (nonatomic) NSNumber ocrInterval;
@property (nonatomic) NSNumber ocrTimeout;
@property (nonatomic) NSNumber maxImageSize;
@property (nonatomic) NSNumber ttnetMaxSize;
@property (nonatomic) NSArray cardConfigList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ocrInterval;
- (id)ocrTimeout;
- (id)ttnetMaxSize;
- (id)cardConfigList;
- (id)cardConfigWithParams:;
- (double)ocrIntervalValue;
- (long long)ocrTimeoutValue;
- (long long)maxImageSizeValue;
- (long long)ttnetMaxSizeValue;
- (id)portraitLandscapeWithParams:;
- (void)setOcrInterval:;
- (void)setOcrTimeout:;
- (void)setTtnetMaxSize:;
- (void)setCardConfigList:;
- (id)maxImageSize;
- (void)setMaxImageSize:;
- (void).cxx_destruct;
+ (id)cardConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
