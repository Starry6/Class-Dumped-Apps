@interface NLNLPLanguageModelNode : NSObject
- (void).cxx_destruct;
- (id)description;
- (id)treeDescription;
- (BOOL)isLeaf;
- (id)initWithTokenIDs:;
- (id)_treeDescriptionWithPrefix:;
- (void)_addString:tokenIDs:;
- (void)_setProbability:dictionary:;
- (void)_evaluateChildrenWithModelState:copyRequired:probability:dictionary:;
+ (id)conditionalProbabilitiesForStrings:modelState:copyRequired:;
@end
