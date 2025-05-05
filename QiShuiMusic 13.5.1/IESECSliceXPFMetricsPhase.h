@interface IESECSliceXPFMetricsPhase : NSObject
@property (nonatomic) NSString phaseName;
@property (nonatomic) Q phaseTimestamp;
- (id)initWithPhaseName:timestamp:;
- (unsigned long long)phaseTimestamp;
- (void)setPhaseTimestamp:;
- (void).cxx_destruct;
- (id)phaseName;
- (void)setPhaseName:;
@end
