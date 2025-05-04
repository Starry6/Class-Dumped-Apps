@interface AWESearchLifeMallUtility : AWESearchUtility
+ (void)saveSearchWord:wordType:historyKey:extraParams:;
+ (id)searchHistoryKey;
+ (void)saveSearchWord:wordType:;
+ (void)saveSearchWord:wordType:historyKey:;
+ (void)deleteSearchWord:;
+ (BOOL)p_wordSourceIsSyncFromOtherScene:;
+ (void)p_syncDeleteSearchWordFromNonLifeMallScene:;
+ (void)deleteAllSearchWords;
+ (BOOL)isTransferWordsEnableWithEnterFrom:enterFromSecond:;
+ (void)syncDeleteAllSearchWordsInNonLifeMallSceneIfNeeded;
+ (void)syncDeleteSearchWordInNonLifeMallSceneIfNeeded:;
+ (id)fetchHistoryWordsWithIncludeTypeList:excludeTypeList:maxNumber:responseHistoryType:enterFrom:enterFromSecond:;
+ (void)deleteAllSearchWordsWithEnterFrom:enterFromSecond:;
+ (void)deleteSearchWord:enterFrom:enterFromSecond:;
@end
