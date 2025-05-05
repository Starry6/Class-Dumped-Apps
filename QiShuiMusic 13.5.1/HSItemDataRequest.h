@interface HSItemDataRequest : HSRequest
- (id)initWithDatabaseID:itemID:format:;
+ (id)requestWithDatabaseID:itemID:format:;
@end
