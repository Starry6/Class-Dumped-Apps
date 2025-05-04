@interface AWETeenSearchHistoryViewModel : NSObject
@property (nonatomic) NSArray historyList;
@property (nonatomic) NSString cacheKey;
@property (nonatomic) AWEStorage storage;
- (void)deleteKeyword:;
- (id)historyList;
- (void)setHistoryList:;
- (void)saveKeyword:;
- (void)deleteAllKeywords;
- (id)cacheKey;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (void).cxx_destruct;
- (void)setCacheKey:;
+ (void)deleteGuestHistoryKeyWord;
@end
