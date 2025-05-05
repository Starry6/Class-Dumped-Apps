@interface VKManifestTileGroupObserverProxy : NSObject
@property (nonatomic) {function<void (GEOResourceManifestManager *)>={__value_func<void (GEOResourceManifestManager *)>={type=[24C]}^v}} willChangeActiveTileGroup;
@property (nonatomic) {function<void (GEOResourceManifestManager * didChangeActiveTileGroup;
@property (nonatomic) {function<void (GEOExperimentConfiguration *)>={__value_func<void (GEOExperimentConfiguration *)>={type=[24C]}^v}} experimentConfigurationDidChange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)resourceManifestManager:didChangeActiveTileGroup:fromOldTileGroup:;
- (void)dealloc;
- (void)setWillChangeActiveTileGroup:;
- (void)setDidChangeActiveTileGroup:;
- (void)resourceManifestManagerWillChangeActiveTileGroup:;
- (id)experimentConfigurationDidChange;
- (void)experimentConfigurationDidChange:;
- (void).cxx_destruct;
- (void)setExperimentConfigurationDidChange:;
- (id)initWithQueue:;
- (id)didChangeActiveTileGroup;
- (id).cxx_construct;
- (id)willChangeActiveTileGroup;
@end
