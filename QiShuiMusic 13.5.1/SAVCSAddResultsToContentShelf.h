@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView
@property (nonatomic) NSString contentShelfViewId;
@property (nonatomic) NSArray fetchMoreResultsCommands;
@property (nonatomic) q pageNumber;
@property (nonatomic) NSArray results;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)results;
- (id)encodedClassName;
- (void)setResults:;
- (long long)pageNumber;
- (void)setPageNumber:;
- (id)fetchMoreResultsCommands;
- (void)setFetchMoreResultsCommands:;
- (id)contentShelfViewId;
- (void)setContentShelfViewId:;
+ (id)addResultsToContentShelf;
+ (id)addResultsToContentShelfWithDictionary:context:;
@end
