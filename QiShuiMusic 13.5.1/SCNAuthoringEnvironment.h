@interface SCNAuthoringEnvironment : NSObject
@property (nonatomic) <SCNSceneRenderer> sceneRenderer;
@property (nonatomic) NSArray selectedNodes;
@property (nonatomic) BOOL selectionIsReadonly;
@property (nonatomic) SCNManipulator manipulator;
@property (nonatomic) SCNNode authoringOverlayLayer;
@property (nonatomic) BOOL shouldSnapOnGrid;
@property (nonatomic) BOOL shouldSnapToAlign;
@property (nonatomic) BOOL graphicalSelectionEnabled;
@property (nonatomic) BOOL surroundToSelect;
@property (nonatomic) q authoringDisplayMask;
@property (nonatomic) double gridUnit;
@property (nonatomic) q editingSpace;
@property (nonatomic) {SCNMatrix4=ffffffffffffffff} viewMatrix;
@property (nonatomic) <SCNAuthoringEnvironmentDelegate> delegate;
- (id)renderer;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)update;
- (id)selectedItems;
- (id)viewMatrix;
- (id)manipulator;
- (id)authoringOverlayLayer;
- (BOOL)didTapAtPoint:;
- (id)_initWithEngineContext:;
- (id)sceneRenderer;
- (BOOL)selectionIsReadonly;
- (void)setSelectionIsReadonly:;
- (void)setEditingSpace:;
- (void)_setupAuthoringEnv2:;
- (void)setupAuthoringEnv2;
- (id)authoringEnvironment2;
- (void)sceneDidChange:;
- (void)setAuthoringDisplayMask:;
- (long long)authoringDisplayMask;
- (void)cancelEdition;
- (id)selectedNodes;
- (void)beginEditingNode:;
- (void)beginEditingNodes:;
- (void)saveInitialSelection;
- (void)beginOrbiting;
- (void)endOrbiting;
- (void)drawLineFromPoint:toPoint:color:;
- (void)drawString:atPoint:color:;
- (BOOL)isEditingSubComponent;
- (BOOL)shouldSnapOnGrid;
- (void)setShouldSnapOnGrid:;
- (BOOL)shouldSnapToAlign;
- (void)setShouldSnapToAlign:;
- (double)gridUnit;
- (long long)editingSpace;
- (BOOL)graphicalSelectionEnabled;
- (void)setGraphicalSelectionEnabled:;
- (BOOL)surroundToSelect;
- (void)setSurroundToSelect:;
+ (long long)defaultAuthoringDisplayMask;
+ (id)rendererForSceneRenderer:;
+ (id)authoringEnvironmentForSceneRenderer:;
+ (id)authoringEnvironmentForSceneRenderer:createIfNeeded:;
@end
