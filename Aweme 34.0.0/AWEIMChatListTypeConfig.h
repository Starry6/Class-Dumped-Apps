@interface AWEIMChatListTypeConfig : NSObject
+ (BOOL)currentIsCommonChatListWrapperType:;
+ (BOOL)currentIsCommonChatListEntranceType:;
+ (long long)initCurrentMessageListTypeWithMessageTabType:;
+ (long long)initCurrentListTabWrapperTypeWithMessageTabType:;
+ (BOOL)enableLoadMoreForCurrentEntranceType:;
+ (BOOL)enableShowDefaultEmptyPageForCurrentEntranceType:;
+ (BOOL)enableShowRecommendForCurrentEntranceType:;
+ (BOOL)enableShowRecommendSectionForCurrentEntranceType:;
+ (BOOL)enableLongPresssForCurrentEntranceType:;
+ (BOOL)enableLongPresssToEnterChatForCurrentEntranceType:;
+ (BOOL)isCouldCellSwipInTabEntryType:;
+ (BOOL)enablePreferDarkThemeForCurrentEntranceType:;
@end
