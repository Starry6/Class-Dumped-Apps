@interface VEComposerAction : NSObject
@property (nonatomic) Q action;
@property (nonatomic) Q count;
@property (nonatomic) Q countOldNodePaths;
- (unsigned long long)countOldNodePaths;
- (id)nodePaths_cstr;
- (id)oldNodePaths_cstr;
- (id)tags_cstr;
- (id)updateNodeKeys_cstr;
- (id)updateNodeValues_cstr;
- (id)init;
- (unsigned long long)action;
- (id)debugDescription;
- (void)clear;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id).cxx_construct;
- (id)copyWithZone:;
+ (id)appendComposerNodes:;
+ (id)appendComposerNodes:tags:;
+ (id)reloadComposerNodes:;
+ (id)reloadComposerNodes:tags:;
+ (id)removeAllComposerNodes;
+ (id)removeComposerNodes:;
+ (id)replaceComposerNode:nodeKeys:nodeValues:;
+ (id)setComposerMode:orderType:;
+ (id)setComposerNodes:;
+ (id)setComposerNodes:tags:;
+ (id)updateComposerNode:nodeKey:nodeValue:;
+ (id)updateMultipleComposerNode:nodeKeys:nodeValues:;
@end
