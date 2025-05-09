@interface AWEVideoCoverTextEditView : UIView
@property (nonatomic) double fontScale;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) ACCAnimatedButton finishButton;
@property (nonatomic) UIView clipView;
@property (nonatomic) AWECoverTextStickerView stickerView;
@property (nonatomic) AWECoverTextEditingModel editingModel;
@property (nonatomic) BOOL animating;
@property (nonatomic) {CGPoint=dd} previewCenter;
@property (nonatomic) {CGAffineTransform=dddddd} previewTransform;
@property (nonatomic) {CGPoint=dd} basicCenter;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) AWEStoryToolBar toolBar;
@property (nonatomic) @? finishBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)setPublishModel:;
- (void)setToolBar:;
- (void)setFinishButton:;
- (void)panAction:;
- (id)toolBar;
- (void)handleKeyboardChangeFrameNoti:;
- (id)editingModel;
- (id)initWithFrame:publishViewModel:fontScale:;
- (void)startEditWithModel:center:transform:;
- (void)setEditingModel:;
- (void)didClickedLeftButton:;
- (void)setBasicCenter:;
- (void)setPreviewTransform:;
- (void)updateToolBarStyle;
- (id)p_calculateEditCenter;
- (BOOL)storyTextMode;
- (void)configStoryTextViews;
- (void)didClickedFinish;
- (void)didClickColor:indexPath:;
- (void)didClickFont:indexPath:;
- (void)didClickedAlignmentButton:;
- (id)p_getAlignmentButtonAccessibilityLabel:;
- (id)basicCenter;
- (void)closeSelf:textModel:location:;
- (void)p_trackChangeStyle:;
- (void)p_trackChangeAlignment:;
- (void)p_trackSelectedColor:;
- (void)p_trackSelectedFont:;
- (void)setAnimating:;
- (double)keyboardHeight;
- (void)dealloc;
- (id)clipView;
- (void)commonInit;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setKeyboardHeight:;
- (void).cxx_destruct;
- (void)setClipView:;
- (BOOL)animating;
- (void)configureViews;
- (void)setStickerView:;
- (id)previewCenter;
- (id)previewTransform;
- (void)setPreviewCenter:;
- (id)stickerView;
- (double)fontScale;
- (void)setFontScale:;
- (void)setFinishBlock:;
- (id)finishBlock;
- (void)tapAction:;
- (id)finishButton;
- (void)p_addObservers;
@end
