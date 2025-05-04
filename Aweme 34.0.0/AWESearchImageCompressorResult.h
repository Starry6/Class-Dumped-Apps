@interface AWESearchImageCompressorResult : NSObject
@property (nonatomic) NSData resultData;
@property (nonatomic) float inputImageSize;
@property (nonatomic) float outputImageSize;
@property (nonatomic) float compression;
@property (nonatomic) NSString scene;
@property (nonatomic) double costTime;
@property (nonatomic) BOOL success;
- (void)setCostTime:;
- (double)costTime;
- (void)setOutputImageSize:;
- (void)setScene:;
- (id)scene;
- (void)setSuccess:;
- (void).cxx_destruct;
- (id)resultData;
- (float)inputImageSize;
- (BOOL)success;
- (void)setInputImageSize:;
- (void)setCompression:;
- (float)compression;
- (float)outputImageSize;
- (void)setResultData:;
@end
