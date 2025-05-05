@interface IESMMAudioDenoiseConfig : IESMMAudioEffectConfig
@property (nonatomic) float algoType;
@property (nonatomic) NSString modelPath;
- (float)algoType;
- (void)setAlgoType:;
- (void)setupDefaultValues;
- (id)toDicInfo;
- (void)setModelPath:;
- (void).cxx_destruct;
- (id)modelPath;
@end
