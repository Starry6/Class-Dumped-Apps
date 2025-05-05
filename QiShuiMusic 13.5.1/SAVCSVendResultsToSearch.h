@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand
@property (nonatomic) NSArray shelves;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (BOOL)requiresResponse;
- (id)title;
- (id)encodedClassName;
- (id)shelves;
- (void)setShelves:;
+ (id)vendResultsToSearch;
+ (id)vendResultsToSearchWithDictionary:context:;
@end
