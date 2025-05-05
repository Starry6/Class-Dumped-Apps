@interface LOTLayerGroup : NSObject
@property (nonatomic) NSArray layers;
- (void)_mapFromJSON:withAssetGroup:withFramerate:;
- (id)initWithLayerJSON:withAssetGroup:withFramerate:;
- (id)layerForReferenceID:;
- (id)layerModelForID:;
- (id)layers;
- (void).cxx_destruct;
@end
