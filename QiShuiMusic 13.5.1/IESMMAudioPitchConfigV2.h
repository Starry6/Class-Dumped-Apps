@interface IESMMAudioPitchConfigV2 : IESMMAudioEffectConfig
@property (nonatomic) NSString effectPath;
@property (nonatomic) NSString infoData;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger channel;
- (id)effectPath;
- (void)setEffectPath:;
- (void)setInfoData:;
- (void)setupDefaultValues;
- (id)toDicInfo;
- (void)setChannel:;
- (int)channel;
- (int)sampleRate;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)setSampleRate:;
- (id)infoData;
@end
