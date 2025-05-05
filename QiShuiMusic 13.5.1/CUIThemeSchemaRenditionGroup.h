@interface CUIThemeSchemaRenditionGroup : NSObject
@property (nonatomic) NSArray renditions;
- (void)dealloc;
- (id)description;
- (id)baseKey;
- (id)initWithRenditions:part:;
- (void)addLayoutMetricsToPSDImageRef:withRendition:;
- (id)mutablePSDImageRef;
- (id)mutablePSDImageRefColumnStyle;
- (id)_renditionsSortedIntoLayers;
- (id)_layerNameForState:;
- (id)_layerNameForDrawingLayer:;
- (id)themeSchemaLayers;
- (id)schemaLayersAndLayerGroups;
- (void)addStatesAndDrawingLayersToPSDLayers:forPresentationState:;
- (void)addValueOrDim1LayersToPSDLayers:forPresentationState:state:drawingLayer:;
- (long long)partFeatures;
- (id)renditions;
- (void)setRenditions:;
+ (id)renditionGroupsForRenditions:part:;
@end
