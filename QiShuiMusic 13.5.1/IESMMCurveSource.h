@interface IESMMCurveSource : NSObject
@property (nonatomic) NSArray xPoints;
@property (nonatomic) NSArray yPoints;
@property (nonatomic) float avgRatio;
@property (nonatomic) q srcDuration;
@property (nonatomic) BOOL needReverse;
@property (nonatomic) Q sourceType;
@property (nonatomic) {?=qiIq} spinCycleTime;
- (void)setNeedReverse:;
- (id)yPoints;
- (void)setSrcDuration:;
- (id)xPoints;
- (float)avgRatio;
- (BOOL)needReverse;
- (void)p_copyFrom:;
- (void)setAvgRatio:;
- (void)setSpinCycleTime:;
- (void)setXPoints:;
- (void)setYPoints:;
- (id)spinCycleTime;
- (long long)srcDuration;
- (unsigned long long)sourceType;
- (void)setSourceType:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
