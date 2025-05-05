@interface IESECSliceXExprCoreWordParser : NSObject
@property (nonatomic) IESECSliceXExprCoreFuncManager funcManager;
@property (nonatomic) IESECSliceXExprCoreOperatorManager operatorManager;
@property (nonatomic) NSCharacterSet normalTokenChar;
@property (nonatomic) NSDictionary constValueMap;
- (id)operatorManager;
- (id)normalTokenChar;
- (void)setFuncManager:;
- (id)constValueMap;
- (id)funcManager;
- (id)initWithFuncManager:operatorManager:;
- (id)parseExprNumberToken:start:numRange:;
- (id)parseExprStringToken:start:stringRange:error:;
- (id)parseNormalToken:start:tokenRange:;
- (void)setOperatorManager:;
- (void).cxx_destruct;
- (id)parse:error:;
@end
