@interface UIRootWindowScenePresentationBinder : UIScenePresentationBinder
@property (nonatomic) UIMutableTransformer sceneTransformer;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)invalidate;
- (id)_rootView;
- (id)sceneTransformer;
- (id)_initWithIdentifier:priority:appearanceStyle:rootWindow:;
- (id)initWithIdentifier:priority:appearanceStyle:rootWindow:;
- (id)initWithPriority:displayConfiguration:;
- (void)_noteWillStartPresentingScene:;
- (void)_noteDidStopPresentingScene:;
@end
