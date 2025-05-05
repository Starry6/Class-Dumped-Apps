@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor
@property (nonatomic) NSString searchQueryString;
- (id)searchQueryString;
- (unsigned long long)hash;
- (void)setSearchQueryString:;
- (void).cxx_destruct;
- (id)name;
- (id)_scopes;
- (id)queryStringForMountPoint:;
- (void)augmentQueryContext:;
- (BOOL)isEqualToItemQueryDescriptor:;
- (BOOL)keepCollectorsAlive;
@end
