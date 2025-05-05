@interface ELFunctionNode : ELBaseNode
@property (nonatomic) ELVariableNode functionNameNode;
@property (nonatomic) NSArray functionArgsNodes;
- (id)nodeStringValue;
- (id)calcuateWtihJSON:;
- (id)existWithJSON:;
- (id)findWithJSON:;
- (id)functionArgsNodes;
- (id)functionNameNode;
- (id)isDigitWithJSON:;
- (id)isEmptyWithJSON:;
- (id)isStringWithJSON:;
- (void)setFunctionArgsNodes:;
- (void)setFunctionNameNode:;
- (BOOL)supportFunctionName:;
- (id)universalFunctionResultWithJSON:;
- (void).cxx_destruct;
- (BOOL)isFunctionNode;
@end
