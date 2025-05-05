@interface HSContainersRequest : HSRequest
@property (nonatomic) BOOL shouldParseResponse;
- (id)initWithAction:;
- (id)initWithDatabaseID:;
- (id)canonicalResponseForResponse:;
- (BOOL)shouldParseResponse;
- (void)setShouldParseResponse:;
+ (id)requestWithDatabaseID:;
@end
