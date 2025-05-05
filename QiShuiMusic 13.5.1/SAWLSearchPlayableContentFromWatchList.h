@interface SAWLSearchPlayableContentFromWatchList : SABaseClientBoundCommand
@property (nonatomic) NSString canonicalId;
@property (nonatomic) NSString contentType;
@property (nonatomic) BOOL onlyReturnNextItem;
@property (nonatomic) NSString siriLocale;
@property (nonatomic) NSString title;
- (void)setContentType:;
- (id)groupIdentifier;
- (id)contentType;
- (void)setTitle:;
- (BOOL)requiresResponse;
- (id)title;
- (id)encodedClassName;
- (id)canonicalId;
- (void)setCanonicalId:;
- (BOOL)onlyReturnNextItem;
- (void)setOnlyReturnNextItem:;
- (id)siriLocale;
- (void)setSiriLocale:;
+ (id)searchPlayableContentFromWatchList;
+ (id)searchPlayableContentFromWatchListWithDictionary:context:;
@end
