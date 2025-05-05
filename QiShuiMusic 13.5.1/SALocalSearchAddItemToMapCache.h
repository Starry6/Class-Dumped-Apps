@interface SALocalSearchAddItemToMapCache : SADomainCommand
@property (nonatomic) SALocalSearchMapItem mapItem;
- (id)mapItem;
- (id)groupIdentifier;
- (void)setMapItem:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)addItemToMapCache;
+ (id)addItemToMapCacheWithDictionary:context:;
@end
