@interface CSJTemplateV1Cache : CSJTemplateCache
- (void)clearPoolIfNeed;
- (id)cacheDirectoryName;
- (id)persistenceKey;
@end
