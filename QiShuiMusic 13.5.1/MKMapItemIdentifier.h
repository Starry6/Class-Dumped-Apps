@interface MKMapItemIdentifier : NSObject
- (id)init;
- (id)initWithMUID:;
- (id)initWithMUID:coordinate:;
- (unsigned long long)muid;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithMUID:resultProviderID:coordinate:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithGEOMapItemIdentifier:;
- (id)geoMapItemIdentifier;
@end
