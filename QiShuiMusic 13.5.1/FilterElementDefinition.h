@interface FilterElementDefinition : NSObject
- (void)dealloc;
- (id)initAsRoot:;
- (BOOL)isBottomValue;
- (id)encodeInto:auxArray:namedRootMap:;
- (void)addRuleField:value:hasAuxValue:auxValue:inside:forPathComponents:permitLink:componentIndex:parentElement:copyParentWildcardLink:;
- (void)dumpAttributesInto:forLevel:;
- (void)dump:;
@end
