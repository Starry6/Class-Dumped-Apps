@interface IESMMAudioDetectionConfig : IESMMAudioEffectConfig
@property (nonatomic) float peak;
@property (nonatomic) float loudness;
@property (nonatomic) IESMMAudioDetection detection;
- (float)fetchResultPeak;
- (float)fetchResultLoudness;
- (void)setupDefaultValues;
- (id)toDicInfo;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setDetection:;
- (id)detection;
- (float)loudness;
- (void)setLoudness:;
- (float)peak;
- (void)setPeak:;
@end
