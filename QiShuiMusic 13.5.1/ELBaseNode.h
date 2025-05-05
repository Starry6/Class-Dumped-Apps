@interface ELBaseNode : NSObject
@property (nonatomic) NSString nodeStringValue;
- (id)nodeStringValue;
- (id)calcuateWtihJSON:;
- (id)initNodeWithValue:;
- (BOOL)isKeywordNode;
- (BOOL)isNullNode;
- (BOOL)isNumberNode;
- (BOOL)isStringNode;
- (BOOL)isSymbolNode;
- (BOOL)isVariableNode;
- (void)setNodeStringValue:;
- (void).cxx_destruct;
- (BOOL)isFunctionNode;
+ (id)nodeWithValue:;
@end
