@interface PSSearchOperation : NSOperation
@property (nonatomic) NSString query;
@property (nonatomic) NSSet rootEntries;
@property (nonatomic) PSSearchResults currentResults;
@property (nonatomic) BOOL newQuery;
@property (nonatomic) <PSSearchOperationDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)query;
- (id)debugDescription;
- (void)main;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)_didCancel;
- (id)currentResults;
- (id)rootEntries;
- (id)initWithSearchQuery:rootEntries:;
- (BOOL)_searchEntries:forQuery:;
- (BOOL)_systemLanguageHasContinuousScript;
- (id)_filterEntriesMatchingQuery:forQuery:;
- (BOOL)isNewQuery;
- (void)setNewQuery:;
+ (id)_wordBoundaryTokenizer;
@end
