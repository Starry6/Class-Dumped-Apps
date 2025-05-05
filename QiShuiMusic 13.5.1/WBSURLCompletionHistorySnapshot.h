@interface WBSURLCompletionHistorySnapshot : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithItems:;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)getBestMatchesForTypedString:limit:forQueryID:withSearchParameters:completionHandler:;
- (void)enumerateMatchDataForTypedStringHint:options:withBlock:;
- (id)fakeBookmarkMatchDataWithURLString:title:shouldPreload:;
- (id)_matchSnapshotForCompletionMatch:;
@end
