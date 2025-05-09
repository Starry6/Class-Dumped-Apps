@interface AWEUGFCollectView : UIView
@property (nonatomic) Q structureState;
@property (nonatomic) UIView<AWEUGPendantContentProtocol> contentView;
@property (nonatomic) UIView<AWEUGPendantCloseButtonProtocol> dismissButton;
@property (nonatomic) UIView<AWEUGPendantProgressProtocol> progressView;
@property (nonatomic) UIView<AWEUGPendantEdgeProtocol> edgeView;
@property (nonatomic) UIView bubble;
@property (nonatomic) AWEBubble edgedBubble;
@property (nonatomic) UIView<AWEUGPendantBottomProtocol> bottomView;
@property (nonatomic) AWEUGPendantModel pendantModel;
@property (nonatomic) BOOL hasGestureRecognizer;
@property (nonatomic) UILabel collectLabel;
@property (nonatomic) BOOL edgePendantDragging;
@property (nonatomic) UIView deleteCollectHintView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} deleteArea;
@property (nonatomic) UILabel deleteTextLabel;
@property (nonatomic) BOOL needMakeVibration;
@property (nonatomic) UIColor progressBackgroundColor;
@property (nonatomic) @? contentTapHandler;
@property (nonatomic) @? closeTapHandler;
@property (nonatomic) @? bubbleTapHandler;
@property (nonatomic) @? edgedBubbleTapHandler;
@property (nonatomic) @? animationFrameHandler;
@property (nonatomic) BOOL isMovingPendant;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? stayPopupTriggerHandler;
- (void)setPendantModel:;
- (id)pendantModel;
- (void)setupUIWithModel:;
- (void)updateUIWithModel:;
- (void)setupGestureRecognizer;
- (void)dismissButtonTapped;
- (id)contentTapHandler;
- (void)contentTapped;
- (void)playAnimationFromFrame:toFrame:loop:complete:;
- (void)setContentTapHandler:;
- (BOOL)checkDataIfReadyUIWithModel:;
- (void)trackLogWithKey:message:;
- (void)setupContentViewWithModel:;
- (void)setupCloseViewWithModel:;
- (id)animationFrameHandler;
- (void)setAnimationFrameHandler:;
- (void)checkButtonState:;
- (unsigned long long)structureState;
- (void)setHasGestureRecognizer:;
- (void)setIsMovingPendant:;
- (id)safeAreaForPendant:;
- (double)heightToRightBottom;
- (double)heightToTop;
- (BOOL)isRightSide;
- (double)heightToLeftBottom;
- (void)setPendantStructureState:animation:complete:;
- (BOOL)hasGestureRecognizer;
- (id)closeTapHandler;
- (void)playLoopAniamtion;
- (void)setStructureState:;
- (void)performUpdateFromState:toState:animated:complete:;
- (unsigned long long)p_adaptContentState:;
- (unsigned long long)pendantStructureState;
- (void)p_removeBubble:complete:;
- (void)bubbleTapped:;
- (id)bubbleTapHandler;
- (unsigned long long)pendantShowState;
- (void)updateUIWithUIInfo:complete:;
- (void)updateUIWithKey:value:complete:;
- (void)updateUIWithKey:model:complete:;
- (void)setCloseTapHandler:;
- (BOOL)isMovingPendant;
- (id)edgedBubbleTapHandler;
- (void)setEdgedBubbleTapHandler:;
- (void)setBubbleTapHandler:;
- (void)updateCollectLabelText:;
- (void)showCollectLabelAnimationWithComplete:;
- (void)hideCollectLabelAnimationWithComplete:;
- (void)updateUIWithKey:model:complete:dismiss:;
- (id)collectLabel;
- (void)setCollectLabel:;
- (id)edgeView;
- (void)setEdgeView:;
- (void)setStayPopupTriggerHandler:;
- (void)setDeleteArea:;
- (void)setupProgressViewWithModel:;
- (void)setupEdgeViewWithModel:;
- (void)setEdgePendantDragging:;
- (void)handleEdgePanGesture:;
- (BOOL)edgePendantDragging;
- (void)playEdgeDraggingAnimation:;
- (void)p_removeEdgedBubble:complete:;
- (id)deleteArea;
- (void)showDeleteCollectHintView:;
- (BOOL)needMakeVibration;
- (void)setNeedMakeVibration:;
- (void)closeFCollectIfNeeded:;
- (id)safeAreaForPendantForCenter:;
- (id)deleteTextLabel;
- (id)deleteCollectHintView;
- (void)showStayPopup;
- (void)updateCollectLabelConstraint;
- (id)edgedBubble;
- (id)stayPopupTriggerHandler;
- (void)p_updateProgressWithValue:complete:;
- (void)p_updateBubbleWithModel:complete:dismiss:;
- (void)p_updateEdgedBubbleWithModel:complete:;
- (void)p_updateBottomViewWithModel:complete:;
- (void)setEdgedBubble:;
- (void)setupBubbleViewTapHandler:;
- (void)adjustCollectLabelWithState:;
- (void)bubbleTapped;
- (void)setDeleteCollectHintView:;
- (void)setDeleteTextLabel:;
- (void)show;
- (void)hide;
- (void)dealloc;
- (id)progressView;
- (id)initWithModel:;
- (id)contentView;
- (void)setProgressView:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)hitTest:withEvent:;
- (void)pauseAnimation;
- (id)bottomView;
- (id)bubble;
- (id)dismissButton;
- (id)progressBackgroundColor;
- (void)setBubble:;
- (void)setDismissButton:;
- (void)setProgressBackgroundColor:;
- (void)setBottomView:;
- (void)handlePanGesture:;
@end
