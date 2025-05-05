@interface WBSFrequentlyVisitedSiteCandidate : NSObject
@property (nonatomic) WBSHistoryItem historyItem;
@property (nonatomic) float score;
- (float)score;
- (void).cxx_destruct;
- (id)initWithHistoryItem:score:;
- (id)historyItem;
+ (id)titleForHistoryItem:;
@end
