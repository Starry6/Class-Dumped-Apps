@interface SAWLRemoveContentFromWatchList : SABaseClientBoundCommand
@property (nonatomic) NSString canonicalId;
@property (nonatomic) NSString siriLocale;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (BOOL)requiresResponse;
- (id)title;
- (id)encodedClassName;
- (id)canonicalId;
- (void)setCanonicalId:;
- (id)siriLocale;
- (void)setSiriLocale:;
+ (id)removeContentFromWatchList;
+ (id)removeContentFromWatchListWithDictionary:context:;
@end
