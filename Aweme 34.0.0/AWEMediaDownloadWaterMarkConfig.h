@interface AWEMediaDownloadWaterMarkConfig : NSObject
@property (nonatomic) Q watermarkTaskType;
- (id)edgeDataWithFileURL:;
- (BOOL)canDirectAddVideoheaderWithFileURL:;
- (id)outputSizeWithFileURL:;
- (unsigned long long)watermarkTaskType;
- (void)setWatermarkTaskType:;
- (void).cxx_destruct;
+ (id)configWithAwemeModel:downloadType:;
+ (id)watermarkConfigMap;
@end
