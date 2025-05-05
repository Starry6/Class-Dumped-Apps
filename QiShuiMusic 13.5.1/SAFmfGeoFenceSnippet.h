@interface SAFmfGeoFenceSnippet : SAUISnippet
@property (nonatomic) SAFmfGeoFence aceFmfGeoFence;
@property (nonatomic) NSNumber enable;
@property (nonatomic) NSString fenceType;
@property (nonatomic) NSNumber oneTimeOnly;
@property (nonatomic) NSURL searchContext;
- (id)enable;
- (void)setSearchContext:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)searchContext;
- (void)setEnable:;
- (id)fenceType;
- (void)setFenceType:;
- (id)oneTimeOnly;
- (void)setOneTimeOnly:;
- (id)aceFmfGeoFence;
- (void)setAceFmfGeoFence:;
+ (id)geoFenceSnippet;
+ (id)geoFenceSnippetWithDictionary:context:;
@end
