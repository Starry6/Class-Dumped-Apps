@interface AWEIMStreakPetElfWidgetFrequencyExitManager : NSObject
+ (void)markShow;
+ (void)markDismissWithoutClick;
+ (BOOL)canShowByFrequencyLimitForConversationId:;
+ (void)updateCurrentDateToDateArrayWithStorageKey:;
+ (id)getDateArrayWithStorageKey:;
+ (void)storeDateArray:storageKey:;
+ (id)getUidStorageKeyWithKey:;
@end
