@interface AWEEditerBeautyCategoryModel : AWERecordBeautyCategoryModel
@property (nonatomic) IESCategoryModel iesCategoryModel;
- (void)setExtra:;
- (id)childExtraNodes;
- (void)p_fillChildItemsWithIESCategoryModel:shouldUseComposerParams:;
- (id)iesCategoryModel;
- (void)addChildExtraNodes:;
- (void)removeAllChildNodes;
- (void)removeAllChildExtraNodes;
- (void)setChildExtraNodes:;
- (id)initWithIESCategory:shouldUseComposerParams:;
- (void)addChildCategory:;
- (void)insertChildCategory:atIndex:;
- (void)setIesCategoryModel:;
- (id)extra;
- (void).cxx_destruct;
- (id)childNodes;
- (id)parentNode;
- (id)categoryName;
- (void)setParentNode:;
- (void)addChildNode:;
- (id)nodeName;
- (id)nodeId;
- (void)setChildNodes:;
@end
