@interface CSJTemplateV3Cache : CSJTemplateCache
- (void)clearPoolIfNeed;
- (id)cacheDirectoryName;
- (id)persistenceKey;
@end
