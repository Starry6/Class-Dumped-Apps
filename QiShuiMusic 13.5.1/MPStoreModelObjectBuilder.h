@interface MPStoreModelObjectBuilder : NSObject
@property (nonatomic) MPPropertySet requestedPropertySet;
@property (nonatomic) BOOL preventStoreItemMetadataCaching;
- (void)setPreventStoreItemMetadataCaching:;
- (id)modelObjectWithStoreItemMetadata:sourceModelObject:userIdentity:;
- (void).cxx_destruct;
- (id)initWithRequestedPropertySet:;
- (id)requestedPropertySet;
- (id)modelObjectWithStoreItemMetadata:;
- (id)modelObjectWithStoreItemMetadata:sourceModelObject:;
- (id)modelObjectWithStorePlatformDictionary:;
- (id)modelObjectWithStoreItemMetadata:userIdentity:;
- (id)modelObjectWithStorePlatformDictionary:userIdentity:;
- (BOOL)preventStoreItemMetadataCaching;
+ (id)allSupportedProperties;
@end
