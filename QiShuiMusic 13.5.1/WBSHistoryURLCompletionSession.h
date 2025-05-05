@interface WBSHistoryURLCompletionSession : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithHistoryService:;
- (void).cxx_destruct;
- (void)getBestMatchesForTypedString:limit:forQueryID:withSearchParameters:completionHandler:;
- (void)enumerateMatchDataForTypedStringHint:options:withBlock:;
- (id)fakeBookmarkMatchDataWithURLString:title:shouldPreload:;
- (id)_matchSnapshotForCompletionMatch:;
- (void)_getBestMatchesForTypedString:limit:forQueryID:withSearchParameters:completionHandler:;
- (id)_databaseConnectionOptions;
- (void)_ensureDatabaseIsWarmed;
@end
