@interface MPModelLibrarySearchRequest : MPModelLibraryRequest
@property (nonatomic) NSArray scopes;
@property (nonatomic) q maximumResultsPerScope;
@property (nonatomic) NSString searchString;
- (void)setSearchString:;
- (id)searchString;
- (id)scopes;
- (id)newOperationWithResponseHandler:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setScopes:;
- (id)copyWithZone:;
- (long long)maximumResultsPerScope;
- (void)setMaximumResultsPerScope:;
+ (BOOL)supportsSecureCoding;
@end
