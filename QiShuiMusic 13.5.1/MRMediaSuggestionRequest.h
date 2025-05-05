@interface MRMediaSuggestionRequest : NSObject
@property (nonatomic) Q maxResults;
@property (nonatomic) BOOL includeArtwork;
@property (nonatomic) NSUUID requestIdentifier;
@property (nonatomic) BOOL useDirectAccess;
- (id)requestIdentifier;
- (void)performWithCompletion:;
- (void)performWithPreferences:completion:;
- (BOOL)includeArtwork;
- (void)setIncludeArtwork:;
- (void)setRequestIdentifier:;
- (BOOL)useDirectAccess;
- (void).cxx_destruct;
- (void)setMaxResults:;
- (id)description;
- (unsigned long long)maxResults;
- (void)setUseDirectAccess:;
- (id)copyWithZone:;
+ (id)defaultRequest;
+ (id)defaultRequestWithArtwork;
@end
