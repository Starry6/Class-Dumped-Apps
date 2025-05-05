@interface GEOAltitudeManifest : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)tripIdsForRegion:;
- (void)commonInit;
- (unsigned int)dataVersionForRegion:;
- (id)nameForRegion:;
- (BOOL)isValidTourId:;
- (void)resourceManifestManagerWillChangeActiveTileGroup:;
- (void)parseManifest:;
- (void)_reloadManifest;
- (void)getvalidFlyOverAnimationIDPool:;
- (id)initWithoutObserver;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (id)availableRegions;
- (unsigned int)versionForRegion:;
- (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:;
- (BOOL)hasDataVersionForRegion:;
- (id)tourIdsForRegion:;
- (BOOL)parseXml:;
+ (id)sharedManager;
@end
