@interface WBDuplicateBookmarkGroup : NSObject
@property (nonatomic) WebBookmark originalBookmark;
@property (nonatomic) NSArray duplicates;
@property (nonatomic) NSArray duplicatesToKeep;
@property (nonatomic) BOOL foundDuplicates;
- (void).cxx_destruct;
- (id)duplicates;
- (id)initWithOriginalBookmark:;
- (id)duplicatesToKeep;
- (void)addDuplicateBookmark:replaceOriginal:;
- (void)addDuplicateBookmarkToKeep:;
- (void)exchangeOriginalBookmarkWithBookmark:;
- (void)removeAllDuplicates;
- (id)originalBookmark;
- (BOOL)foundDuplicates;
@end
