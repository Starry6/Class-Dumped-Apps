@interface GEOPlaceExternalActionLinkExtensionParams : NSObject
@property (nonatomic) Q featureType;
@property (nonatomic) NSString vendorId;
@property (nonatomic) NSString externalItemId;
@property (nonatomic) GEOAttributionApp attributionApp;
- (unsigned long long)featureType;
- (id)vendorId;
- (void).cxx_destruct;
- (id)initWithExtensionParams:attributionMap:;
- (id)externalItemId;
- (id)attributionApp;
@end
