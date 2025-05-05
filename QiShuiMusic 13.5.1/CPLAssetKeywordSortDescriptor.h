@interface CPLAssetKeywordSortDescriptor : NSSortDescriptor
- (id)init;
- (id)description;
- (long long)compareObject:toObject:;
+ (id)sortedKeywordsForKeywordSet:;
@end
