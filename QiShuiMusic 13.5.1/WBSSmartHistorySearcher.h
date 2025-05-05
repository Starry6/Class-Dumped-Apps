@interface WBSSmartHistorySearcher : NSObject
- (id)initWithTopics:;
- (void).cxx_destruct;
- (id)_searchItemsInTopic:forText:options:;
- (id)_searchTopicsForText:options:;
- (void)performSearchWithText:options:completionHandler:;
@end
