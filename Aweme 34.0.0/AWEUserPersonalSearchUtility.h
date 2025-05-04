@interface AWEUserPersonalSearchUtility : NSObject
+ (id)searchPrivacyState;
+ (id)fetchHistoryWordsWithUserID:currentUserId:searchStyleType:;
+ (void)deleteAllSearchWordWithUserID:currentUserId:searchStyleType:;
+ (void)deleteSearchWord:userID:currentUserId:searchStyleType:;
+ (id)p_userHistorysKeyWithUserID:currentUserId:searchStyleType:;
+ (void)removeOldestHistory:;
+ (void)insertKeyWord:toHistoryRecords:;
+ (void)saveSearchWord:userID:currentUserId:searchStyleType:;
@end
