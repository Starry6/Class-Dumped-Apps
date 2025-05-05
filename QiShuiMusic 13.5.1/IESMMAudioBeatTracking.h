@interface IESMMAudioBeatTracking : NSObject
@property (nonatomic) {?={?=qiIq}{?=qiIq}} originTimeRange;
@property (nonatomic) IESMMAudioBeatTrackingResult result;
@property (nonatomic) NSURL audioURL;
@property (nonatomic) NSString modelPath;
@property (nonatomic) float srcStart;
@property (nonatomic) float srcDuration;
@property (nonatomic) float dstStart;
@property (nonatomic) float dstDuration;
- (id)originTimeRange;
- (void)setDstDuration:;
- (id)convertFeatureSetToIESMMAudioBeatTrackingResult:;
- (float)dstDuration;
- (float)dstStart;
- (id)initWithFileURL:srcStart:srcDuration:modelPath:;
- (BOOL)p_checkParameters;
- (id)p_getResult;
- (void)setDstStart:;
- (void)setOriginTimeRange:;
- (float)srcDuration;
- (float)srcStart;
- (id)result;
- (void).cxx_destruct;
- (id)modelPath;
- (void)setResult:;
- (id)audioURL;
- (id)getResult;
+ (void)GetResultAsync:srcStart:srcDuration:dstDuration:modelPath:completion:;
@end
