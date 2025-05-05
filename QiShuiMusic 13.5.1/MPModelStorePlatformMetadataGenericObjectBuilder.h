@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject
@property (nonatomic) MPPropertySet requestedProperties;
- (void).cxx_destruct;
- (id)initWithRequestedProperties:;
- (id)genericObjectForStorePlatformMetadata:userIdentity:;
- (id)requestedProperties;
@end
