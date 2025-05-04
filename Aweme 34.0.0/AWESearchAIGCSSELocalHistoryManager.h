@interface AWESearchAIGCSSELocalHistoryManager : NSObject
+ (BOOL)isSameQueryRepeatEntryWithSearchKeyword:searchSource:searchDedupKey:;
+ (id)getFeedSummaryHistoryDataWithVideoID:;
+ (id)getHistoryData;
+ (id)historyStorage;
+ (void)updateLastConversationID:videoID:;
+ (BOOL)disableCheckHistorySecure;
+ (void)updateHistoryWithData:;
+ (void)updateFeedSummaryHistoryWithData:videoID:;
+ (void)clearFeedSummaryHistoryData;
+ (id)getLastConversationIDWithVideoID:;
+ (BOOL)needCheckHistorySecure;
+ (void)finishCheckHistorySecure;
+ (id)getValueForKey:;
+ (void)setValue:forKey:;
+ (void)clean;
@end
