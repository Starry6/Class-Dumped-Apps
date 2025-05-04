@interface AWEAICreateEffectStoreService : NSObject
+ (id)readCurrentHuafengKeywords;
+ (long long)unSelectedCustomKeyCount;
+ (id)filterCustomSelectedKeywords:;
+ (BOOL)isEqualBeforeStoreKeywords:;
+ (void)writeKeywords:customKeywords:selectedList:keywordTitle:;
+ (void)clearSelectedKeywordCache;
+ (id)currentUserID;
@end
