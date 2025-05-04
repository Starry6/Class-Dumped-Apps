@interface AWEAnchorSearchHistoryViewModel : NSObject
@property (nonatomic) q anchorType;
@property (nonatomic) NSArray historyList;
- (void)saveSearchHistoryResultWithKeyword:;
- (id)initWithAnchorBusinessType:;
- (id)historyList;
- (void)deleteHistoryItemWithKeyWord:;
- (void)setHistoryList:;
- (void).cxx_destruct;
- (long long)anchorType;
- (void)deleteAllHistory;
- (void)setAnchorType:;
@end
