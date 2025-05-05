@interface IESMMAudioSamiProcessorConfig : IESMMAudioEffectConfig
@property (nonatomic) NSString resourceJsonFilePath;
@property (nonatomic) NSString resourceFindPath;
@property (nonatomic) NSMutableArray paramIndex;
@property (nonatomic) NSMutableArray params;
@property (nonatomic) IESMMKeyFrameInfo audioFilterFrameInfo;
- (id)audioFilterFrameInfo;
- (id)paramIndex;
- (id)resourceFindPath;
- (id)resourceJsonFilePath;
- (void)setAudioFilterFrameInfo:;
- (void)setParamIndex:;
- (void)setResourceFindPath:;
- (void)setResourceJsonFilePath:;
- (void)setupDefaultValues;
- (id)toDicInfo;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
