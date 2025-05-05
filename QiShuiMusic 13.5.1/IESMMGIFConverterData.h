@interface IESMMGIFConverterData : NSObject
@property (nonatomic) NSURL srcVideoURL;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) q frameRate;
@property (nonatomic) double frameDuration;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) {CGAffineTransform=dddddd} transform;
- (void)setSrcVideoURL:;
- (id)srcVideoURL;
- (id)timeRange;
- (id)init;
- (void)setFrameRate:;
- (long long)frameRate;
- (void)setTransform:;
- (void)setTimeRange:;
- (id)outputSize;
- (id)transform;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (double)frameDuration;
- (void)setFrameDuration:;
- (void)setOutputSize:;
@end
