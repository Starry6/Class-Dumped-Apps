@interface AWEEditerBeautyDataEPModelTransformer : AWERecordBeautyDataEPModelTransformer
- (BOOL)p_isEmptyArray:;
- (id)constructTreeWithCategories:dataFilterConfig:;
- (void)appendOffNodeWithCategoryModel:;
- (void)appendStyleNodeWithCategories:dataFilterConfig:categoryModel:atIndex:;
- (id)rootCategoriesWithCategories:dataFilterConfig:;
- (id)styleRootNode:;
- (id)styleBeautyEffectStyleMoreNode;
- (id)p_filterCategories:dataFilterConfig:;
- (id)p_removeChildCategories:shouldUseComposerParams:;
- (id)normalRootNode:;
- (id)constructTreeWithCategory:isNormalStyleStatus:;
- (id)constructTreeWithItem:isNormalStyleStatus:;
- (id)filterDataAndConvertToTreeWithCategories:dataFilterConfig:;
- (id)filterDataAndConvertToStyleTreeWithCategories:dataFilterConfig:;
- (id)constructTreeWithCategory:;
- (id)constructTreeWithItem:;
- (id)constructTree:;
@end
