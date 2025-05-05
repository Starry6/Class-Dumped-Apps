@interface HSItemsRequest : HSRequest
@property (nonatomic) BOOL shouldParseResponse;
@property (nonatomic) BOOL includeHiddenItems;
- (id)initWithAction:;
- (double)timeoutInterval;
- (id)initWithDatabaseID:;
- (id)initWithDatabaseID:containerID:;
- (id)canonicalResponseForResponse:;
- (BOOL)shouldParseResponse;
- (void)setShouldParseResponse:;
- (BOOL)includeHiddenItems;
- (void)setIncludeHiddenItems:;
+ (id)requestWithDatabaseID:;
+ (id)requestWithDatabaseID:containerID:;
@end
