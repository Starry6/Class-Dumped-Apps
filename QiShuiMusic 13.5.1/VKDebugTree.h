@interface VKDebugTree : NSObject
- (void)setOptions:;
- (id)nodes;
- (void).cxx_destruct;
- (id)internalData;
- (id).cxx_construct;
- (void)printTree;
- (void)setOption:value:;
- (void)enableAllOptions;
- (void)disableAllOptions;
- (void)_populateData;
- (void)populateData:;
- (void)replaceInternalData:;
- (void)_outputTree:;
- (id)logTree;
- (id)_serializeValue:;
- (id)_deserializeValue:;
- (id)_serializeProperty:;
- (id)_deserializeProperty:;
- (id)_serializeNode:;
- (id)_deserializeNode:;
- (id)serializeTree;
- (BOOL)deserializeTree:;
- (id)serializeZippedTree;
- (BOOL)deserializeZippedTree:;
@end
