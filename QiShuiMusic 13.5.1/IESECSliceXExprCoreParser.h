@interface IESECSliceXExprCoreParser : NSObject
@property (nonatomic) IESECSliceXExprCoreWordParser wordParser;
- (id)initWithFuncManager:operatorManager:;
- (void)setWordParser:;
- (id)wordParser;
- (void).cxx_destruct;
- (id)parse:error:;
@end
