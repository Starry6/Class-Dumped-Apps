@interface SASVoiceSearchResult : AceObject
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSData result;
@property (nonatomic) NSString searchType;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)searchType;
- (void)setStatusCode:;
- (void)setSearchType:;
- (id)statusCode;
- (id)groupIdentifier;
- (void)setHeaders:;
- (id)encodedClassName;
- (id)headers;
- (void)setResult:;
+ (id)voiceSearchResult;
+ (id)voiceSearchResultWithDictionary:context:;
@end
