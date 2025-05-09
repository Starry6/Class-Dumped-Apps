@interface PKPaintAreaViewSurface : NSObject
@property (nonatomic) BOOL isDrawing;
@property (nonatomic) BOOL allowLiveInteraction;
@property (nonatomic) BOOL waitingForStrokeToEnd;
@property (nonatomic) BOOL isErasingObjects;
@property (nonatomic) NSMutableArray strokesToErase;
@property (nonatomic) NSMutableSet strokeIDsToErase;
@property (nonatomic) PKController drawingController;
@property (nonatomic) PKPaintAreaView paintAreaView;
@property (nonatomic) <PKPaintSurface> surface;
@property (nonatomic) {CGSize=dd} drawingSize;
@property (nonatomic) double textureScale;
@property (nonatomic) {CGAffineTransform=dddddd} strokeTransform;
@property (nonatomic) BOOL isMipmapped;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) <PKDrawingUUID> drawingUUID;
@property (nonatomic) {CGPoint=dd} previousPoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)surface;
- (void)dealloc;
- (id)dispatchQueue;
- (void).cxx_destruct;
- (id)previousPoint;
- (void)setPreviousPoint:;
- (id)drawingSize;
- (BOOL)isDrawing;
- (id)drawingController;
- (id)strokeTransform;
- (void)setAllowLiveInteraction:;
- (void)setNeedsDrawingDisplay;
- (void)drawingChanged:;
- (void)drawingCancelled;
- (void)setIsDrawing:;
- (void)eraseStrokesForPoint:prevPoint:;
- (void)_didFinishErasingStrokes:;
- (void)eraserCancelled;
- (BOOL)isErasingObjects;
- (BOOL)allowLiveInteraction;
- (id)strokesToErase;
- (id)strokeIDsToErase;
- (void)metalRendererController:didCommitRenderingIntoTexture:;
- (id)nextTextureTargetForMetalRendererController:;
- (void)vsync:;
- (id)initWithPaintSurface:dispatchQueue:device:;
- (id)CIImageFromTexture:;
- (void)dispatchSyncOnSurfaceQueue:;
- (void)drawingBegan:activeInputProperties:inputType:;
- (void)_setupPKController;
- (void)drawingEndedWithDetectedShape:completionBlock:;
- (BOOL)eraserBeganAtLocation:;
- (void)eraserMovedToLocation:;
- (void)eraserEnded;
- (BOOL)waitingForStrokeToEnd;
- (id)paintAreaView;
- (void)setPaintAreaView:;
- (double)textureScale;
- (BOOL)isMipmapped;
- (id)drawingUUID;
@end
