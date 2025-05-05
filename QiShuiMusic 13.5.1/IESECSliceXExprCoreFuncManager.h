@interface IESECSliceXExprCoreFuncManager : NSObject
@property (nonatomic) NSMutableDictionary functions;
- (id)getFuncFromSymbol:;
- (void)registerFunc:;
- (id)init;
- (id)functions;
- (void).cxx_destruct;
- (void)setFunctions:;
@end
