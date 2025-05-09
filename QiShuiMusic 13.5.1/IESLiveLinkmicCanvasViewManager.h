@interface IESLiveLinkmicCanvasViewManager : NSObject
@property (nonatomic) IESLiveLinkmicCanvasView canvasView;
@property (nonatomic) IESLiveLinkmicCanvasViewModel canvasViewModel;
@property (nonatomic) NSMapTable linkMicIDToRTCView;
@property (nonatomic) UIView cameraPreview;
@property (nonatomic) BOOL cameraPreviewIsInAnimation;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cameraPreviewOriginFrame;
@property (nonatomic) <IESLiveLinkmicCanvasViewManagerDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveLinkmicCanvasLayoutProvider> layoutProvider;
- (BOOL)hasRTCSessionViewWithLinkmicID:;
- (id)canvasViewModel;
- (void)insertRTCSessionView:linkmicID:;
- (void)addCameraPreviewIfNeeded;
- (void)bindRTCSessionViewWithLinkmicID:toUser:;
- (id)cameraEffectProvider;
- (id)cameraPreview;
- (BOOL)cameraPreviewIsInAnimation;
- (id)cameraPreviewOriginFrame;
- (id)currentCanvasWithLayoutProvider:;
- (void)didSetAttachingDIContext;
- (void)insertLinkMicUser:;
- (id)linkMicIDToRTCView;
- (BOOL)onRecievedSEIResult:;
- (void)resetCameraPreview;
- (id)sessionViewWithLinkmicId:;
- (void)setCameraCornerHidden:;
- (void)setCameraPreview:;
- (void)setCameraPreviewIsInAnimation:;
- (void)setCameraPreviewOriginFrame:;
- (void)setCanvasViewModel:;
- (void)setLinkMicIDToRTCView:;
- (void)updateCameraPreview;
- (void)updateSessionViews;
- (void)updateWithLayoutProvider:;
- (id)layoutProvider;
- (void)setDataSource:;
- (void)setLayoutProvider:;
- (id)dataSource;
- (void).cxx_destruct;
- (id)canvasView;
- (void)setCanvasView:;
- (id)currentCanvas;
- (void)clean;
- (void)clearCanvas;
@end
