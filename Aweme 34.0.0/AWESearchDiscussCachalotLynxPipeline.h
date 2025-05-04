@interface AWESearchDiscussCachalotLynxPipeline : AWESearchCachalotLynxPipeline
- (id)customGlobalProps;
- (id)reuseIdentifierWithViewModel:;
- (BOOL)useTemplateBundle;
- (id)getLynxSeparateRenderBlockList;
- (Class)getSeparateRenderConfigClass;
- (BOOL)supportCustomGlobalProps;
- (BOOL)enableUseUpdateHeightTransaction;
- (BOOL)enableRankFixForSeperateRenderMeasure;
- (id)templateBundleLoadListBeforeRequest;
- (id)getLynxReuseBlockList;
- (BOOL)enableUpdateGlobalPropsForLynxReuse;
- (BOOL)enableRankFixForSeparateRenderMeasure;
@end
