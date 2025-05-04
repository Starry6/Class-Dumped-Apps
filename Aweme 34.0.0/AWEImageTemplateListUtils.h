@interface AWEImageTemplateListUtils : NSObject
+ (id)readImageTemplateListPannelResponseModelInfoWithCacheType:scene:;
+ (id)readImageTemplateListCategoryResponseModelInfoWithCacheType:scene:;
+ (void)clearImageTemplateListCache;
+ (id)templateListModelInfoCachePathWithCacheType:scene:;
+ (id)templateListCategoryInfoCachePathWithCacheType:scene:;
+ (id)getTemplateListInfoCacheDic;
+ (void)writeImageTemplateListCategoryResponseModelInfo:cacheType:scene:;
+ (void)writeImageTemplateListPannelResponseModelInfo:cacheType:scene:;
@end
