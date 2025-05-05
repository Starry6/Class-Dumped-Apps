@interface IESMMAudioSamiParamIndexItem : NSObject
@property (nonatomic) NSInteger parameterIndex;
@property (nonatomic) NSInteger portIndex;
- (int)parameterIndex;
- (int)portIndex;
- (void)setParameterIndex:;
- (void)setPortIndex:;
- (id)toDicInfo;
@end
