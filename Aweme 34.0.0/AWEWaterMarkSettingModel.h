@interface AWEWaterMarkSettingModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel resourceURL;
@property (nonatomic) NSString md5;
@property (nonatomic) Q fps;
@property (nonatomic) NSString endWatermarkTitle;
@property (nonatomic) NSString endWatermarkSubTitle;
- (id)endWatermarkTitle;
- (void)setEndWatermarkTitle:;
- (id)endWatermarkSubTitle;
- (void)setEndWatermarkSubTitle:;
- (id)resourceURL;
- (unsigned long long)fps;
- (void).cxx_destruct;
- (void)setResourceURL:;
- (void)setMd5:;
- (id)md5;
- (void)setFps:;
+ (id)resourceURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
