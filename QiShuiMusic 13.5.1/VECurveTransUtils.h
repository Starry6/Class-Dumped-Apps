@interface VECurveTransUtils : NSObject
@property (nonatomic) q srcDuration;
@property (nonatomic) q dstDuration;
@property (nonatomic) Q sourceType;
@property (nonatomic) IESMMSpinSpeedUtils spinUtils;
@property (nonatomic) double avgSpeedRatio;
- (double)getCurveSpeedRatioWithPlayTime:;
- (void)setDstDuration:;
- (void)setSrcDuration:;
- (double)avgSpeedRatio;
- (long long)dstDuration;
- (id)initWithCurveSource:;
- (id)initWithPoints:yPoints:srcDuration:;
- (id)initWithPoints:yPoints:srcDuration:config:;
- (void)setSpinUtils:;
- (id)spinUtils;
- (long long)srcDuration;
- (long long)transPlayTimeToVideoTime:;
- (long long)transVideoTimeToPlayTime:;
- (void)dealloc;
- (unsigned long long)sourceType;
- (void)setSourceType:;
- (void).cxx_destruct;
+ (id)transferVideoPointXtoPlayPointX:curveSpeedPointY:;
@end
