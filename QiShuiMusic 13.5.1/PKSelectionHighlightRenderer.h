@interface PKSelectionHighlightRenderer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (id)initWithStrokeSelection:renderingDelegate:;
- (id)initForLiveSelectionWithRenderingDelegate:;
- (void)_setupSelectionAdornment;
- (void)_didBeginDraggingSelection;
- (void)_didEndDraggingSelection;
- (id)adornmentLayer;
- (id)editMenuLocation;
- (id)lassoPath;
- (void)_renderLiveSelectionPath:forStrokes:inDrawing:liveScrollOffset:;
@end
