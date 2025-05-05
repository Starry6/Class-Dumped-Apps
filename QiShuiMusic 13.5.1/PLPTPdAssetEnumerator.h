@interface PLPTPdAssetEnumerator : NSObject
- (void).cxx_destruct;
- (id)initWithAssetObjectIDs:managedObjectContext:conversionSupport:;
- (void)enumerateAssetsUsingBlock:;
- (BOOL)enumerateAssetsWithCount:fetchOffset:usingBlock:;
- (id)assetsFromOffset:count:;
+ (id)enumeratorWithAssetObjectIDs:managedObjectContext:conversionSupport:;
@end
