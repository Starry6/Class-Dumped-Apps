@interface WBSBrowserTabCompletionProvider : NSObject
@property (nonatomic) <WBSBrowserTabCompletionProviderSource> dataSource;
@property (nonatomic) <WBSBrowserTabCompletionProviderDelegate> delegate;
@property (nonatomic) NSString currentQuery;
@property (nonatomic) NSArray currentTabCompletionMatches;
@property (nonatomic) NSArray tabInfos;
- (void)setDataSource:;
- (id)init;
- (void)setDelegate:;
- (id)currentQuery;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (id)tabInfos;
- (void)_prepareQueue;
- (id)selectedTabInfo;
- (void)setCurrentQuery:forQueryID:;
- (void)tabCompletionMatchesForQuery:completionHandler:;
- (id)bestTabCompletionMatchWithTopHitURL:isBestMatchTopHit:;
- (id)bestTabCompletionMatchFromMatches:withTopHitURL:isBestMatchTopHit:;
- (id)_matchesForQuery:tabInfos:selectedTabInfo:forQueryID:;
- (BOOL)_isOperationValidForQuery:tabInfos:selectedTabInfo:;
- (long long)_compareTabMatch:otherTabMatch:;
- (unsigned long long)_distanceFromSelectedTabForTabMatch:;
- (id)currentTabCompletionMatches;
@end
