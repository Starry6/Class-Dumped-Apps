@interface AWEImmersivePlayInteractionViewController : AWEPlayInteractionViewController
@property (nonatomic) AWEElementContainer immersiveBottomContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHide:;
- (id)subUnitsInfo;
- (void)setupContainer;
- (void)makeViewConstraints;
- (void)removeAndRebuildConstraintsAllContainers;
- (id)immersiveBottomContainer;
- (void)setupBottomContainer;
- (void)setupLeftContainer;
- (void)setupRightContainer;
- (void)clearContainsWithSlideClearMode:;
- (Class)elementConfigsClassType;
- (BOOL)loadElementContainerByProvider;
- (void)setupImmersiveBottomContainer;
- (void)removeAndRebuildImmersiveBottomContainer;
- (Class)dispatcherManagerClassType;
- (void).cxx_destruct;
- (void)reset;
@end
