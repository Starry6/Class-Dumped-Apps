@interface HSBrowseRequest : HSRequest
- (id)canonicalResponseForResponse:;
- (id)initWithDatabaseID:browseGroupType:;
- (id)_stringForBrowseGroupType:;
+ (id)requestWithDatabaseID:browseGroupType:;
@end
