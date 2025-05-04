@interface AWEIMEmoticonHotWordManager : NSObject
- (void)fetchHotWordsIfNeeded;
- (id)topSearchWordsStorageKey;
- (void)fetchHotWordsCore;
- (unsigned long long)caculateCustomLengthWithKeyword:;
- (id)searchedKeysStorageKey;
- (void)didSearchKeyword:;
- (id)oftenSearchWordsArray;
- (id)topSearchWordsArray;
- (id)hotWordsArray;
- (id)currentUserID;
+ (id)defalutManager;
@end
