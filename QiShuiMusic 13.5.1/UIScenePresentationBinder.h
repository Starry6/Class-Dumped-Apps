@interface UIScenePresentationBinder : NSObject
@property (nonatomic) <UIScenePresentationBinderDelegate> delegate;
@property (nonatomic) NSSet scenes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scene:didApplyUpdateWithContext:;
- (id)scenes;
- (void)dealloc;
- (void)addScene:;
- (void)setDelegate:;
- (void)sceneDidInvalidate:;
- (id)succinctDescriptionBuilder;
- (id)delegate;
- (void)sceneLayerManagerDidStopTrackingLayers:;
- (void).cxx_destruct;
- (void)removeScene:;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)invalidate;
- (id)descriptionWithMultilinePrefix:;
- (id)_rootView;
- (void)sceneLayerManagerDidStartTrackingLayers:;
- (id)initWithIdentifier:priority:rootView:appearanceStyle:;
- (void)_noteWillStartPresentingScene:;
- (void)_noteDidStopPresentingScene:;
- (BOOL)_delegateShouldPresentSceneOnlyWhenLayersExist;
- (void)_delegateDidStartPresentingScene:;
- (void)_delegateDidStopPresentingScene:;
- (void)_removeScene:forReason:;
- (void)_evaluateSceneForHosting:forReason:;
- (void)_activatePresenter:scene:reason:;
- (void)_deactivatePresenter:scene:reason:;
- (void)_noteSceneMovedToForeground:;
- (void)_noteSceneMovedToBackground:;
- (void)_noteSceneChangedLevel:;
- (void)_positionPresentationViewInRootViewOrderedCorrectly:;
@end
