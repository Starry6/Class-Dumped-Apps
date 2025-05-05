@interface SAAppsAppSearch : SABaseClientBoundCommand
@property (nonatomic) NSString applicationName;
- (id)groupIdentifier;
- (id)applicationName;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setApplicationName:;
+ (id)appSearch;
+ (id)appSearchWithDictionary:context:;
@end
