@interface AWEEcomSearchUtility : AWESearchBaseUtility
- (void)trackSearchCorrectionEvent:correctModel:keyword:logPassback:;
- (id)currentVCStringForSearchTabType:;
- (id)aweui_emptySearchPageConfigForStateHarmfulCategoryWithManager:;
+ (id)frequrntHistoryKey;
+ (id)fetchHistoryWordsWithIncludeTypeList:excludeTypeList:maxNumber:responseHistoryType:historyKey:;
+ (void)deleteSearchWord:historyKey:;
+ (void)deleteAllSearchWordsHistoryKey:;
+ (void)discardOldUserHistoryIfNeeded;
+ (void)p_discardOldUserHistoryIfNeeded;
+ (id)searchHistoryKey;
+ (void)p_clearHistoryStorageForKey:;
+ (BOOL)enableSearchTabConfigOpt;
+ (id)searchHistoryWordDict;
+ (void)saveFrequentHistoryWordsIfNeeded:;
+ (BOOL)checkUniformityAndTrackWithRequestKW:responseKW:logPassback:correctModel:tabType:searchFrom:isRefresh:;
+ (id)fetchHistoryWordsWithIncludeTypeList:excludeTypeList:maxNumber:responseHistoryType:;
+ (void)deleteSearchWord:;
+ (void)deleteAllSearchWords;
@end
