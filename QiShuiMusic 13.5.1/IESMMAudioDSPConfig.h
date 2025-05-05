@interface IESMMAudioDSPConfig : IESMMAudioEffectConfig
@property (nonatomic) NSString effectPath;
- (id)effectPath;
- (void)setEffectPath:;
- (void)setupDefaultValues;
- (id)toDicInfo;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
