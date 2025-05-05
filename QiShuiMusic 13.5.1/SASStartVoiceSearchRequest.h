@interface SASStartVoiceSearchRequest : SASStartSpeechDictation
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSDictionary queryParameters;
@property (nonatomic) NSArray searchTypes;
- (id)groupIdentifier;
- (id)queryParameters;
- (void)setHeaders:;
- (BOOL)requiresResponse;
- (id)searchTypes;
- (id)encodedClassName;
- (void)setSearchTypes:;
- (id)headers;
- (void)setQueryParameters:;
+ (id)startVoiceSearchRequest;
+ (id)startVoiceSearchRequestWithDictionary:context:;
@end
