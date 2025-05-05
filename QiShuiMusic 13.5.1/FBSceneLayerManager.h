@interface FBSceneLayerManager : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) FBScene scene;
@property (nonatomic) NSOrderedSet layers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (void)addObserver:;
- (id)_initWithScene:;
- (id)layers;
- (void)_setLayers:;
- (id)identifier;
- (id)succinctDescriptionBuilder;
- (id)scene;
- (void)_observer_sceneLayerManagerDidUpdateLayers;
- (void).cxx_destruct;
- (void)_observer_didStopTrackingLayers;
- (id)succinctDescription;
- (id)description;
- (id)layerWithContextID:;
- (void)_observer_didStartTrackingLayers;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
@end
