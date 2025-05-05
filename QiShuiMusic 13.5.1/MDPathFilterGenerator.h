@interface MDPathFilterGenerator : NSObject
- (void)dump;
- (void)dealloc;
- (void)addNamed:auxValue:forPath:;
- (id)filterDataForMountDepth:;
- (id)initWithDefaultFieldsAndValues:ignoreFields:mappedPrefixes:hiddenExtensions:mappedExtensions:;
- (void)addMappedExtensions:;
- (void)setAtBundleField:inBundleField:;
- (void)addNamed:field:value:hasAuxValue:auxValue:forPath:permitLink:copyParentWildcardLink:;
- (void)addNamed:field:value:forPath:permitLink:;
- (void)addRules:withPrefix:;
- (void)addRules:withPrefix:tableMapping:;
- (id)copyFilterMDPlistForMountDepth:;
@end
