@interface IESLiveInteractConfigLayoutEngineInput : NSObject
@property (nonatomic) <IESLiveInteractConfigLayoutPreviewInputProtocol> previewInput;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} preferredContainerFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} preferredGuestListContainerFrame;
@property (nonatomic) double topOffset;
@property (nonatomic) double uiContainerBottomOffset;
@property (nonatomic) <IESLiveInteractionConfigLayoutCanvasAdjustable> canvasAdapter;
- (id)canvasAdapter;
- (id)preferredContainerFrame;
- (id)preferredGuestListContainerFrame;
- (id)previewInput;
- (void)setCanvasAdapter:;
- (void)setPreferredContainerFrame:;
- (void)setPreferredGuestListContainerFrame:;
- (void)setPreviewInput:;
- (void)setUiContainerBottomOffset:;
- (double)uiContainerBottomOffset;
- (double)topOffset;
- (void)setTopOffset:;
- (void).cxx_destruct;
@end
