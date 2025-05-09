@interface IESLiveSaaSImageEditViewController : UIViewController
@property (nonatomic) @? completion;
@property (nonatomic) UIImage image;
@property (nonatomic) double ratio;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) double cropRectCornerRadius;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView cropView;
@property (nonatomic) IESLiveSaaSImageEditScrollView scrollView;
@property (nonatomic) UIView topBarView;
@property (nonatomic) IESLiveSaaSImageButton cancelButton;
@property (nonatomic) IESLiveSaaSImageButton confirmButton;
@property (nonatomic) IESLiveSaaSImageButton resetButton;
@property (nonatomic) UIBezierPath path;
@property (nonatomic) CAShapeLayer cropMask;
@property (nonatomic) CAShapeLayer borderLayer;
@property (nonatomic) BOOL editing;
@property (nonatomic) NSTimer resetTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDefaultRatio;
- (void)startResetTimer;
- (void)calculateCropRect;
- (void)calculateImageView;
- (void)calculateScrollView;
- (void)cancelResetTimer;
- (void)confirmButtonHandler;
- (id)cropImageWithImageViewWidth:convertRect:cornerRadius:;
- (id)cropMask;
- (double)cropRectCornerRadius;
- (void)drawBoard;
- (void)drawCropViewMask;
- (id)initWithImage:aspectRatio:completion:;
- (void)resetButtonHandler;
- (void)scrollViewContentReset;
- (double)scrollViewHeight;
- (void)setCropEditing:animated:;
- (void)setCropMask:;
- (void)setCropRectCornerRadius:;
- (void)setResetTimer:;
- (void)setupUserInterface;
- (id)completion;
- (id)path;
- (void)scrollViewDidEndZooming:withView:atScale:;
- (void)scrollViewDidEndDecelerating:;
- (void)setCompletion:;
- (void)setScrollView:;
- (id)viewForZoomingInScrollView:;
- (void)dealloc;
- (BOOL)prefersStatusBarHidden;
- (void)setPath:;
- (id)cropRect;
- (void)setEditing:;
- (void)setCropRect:;
- (void)setImage:;
- (id)resetTimer;
- (void)viewDidDisappear:;
- (id)scrollView;
- (void)scrollViewWillBeginDragging:;
- (void)viewWillDisappear:;
- (void)scrollViewWillBeginZooming:withView:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (id)imageView;
- (void)viewDidAppear:;
- (void)setCancelButton:;
- (void)viewWillAppear:;
- (id)cancelButton;
- (id)image;
- (void)setImageView:;
- (BOOL)editing;
- (void)viewDidLoad;
- (id)confirmButton;
- (void)setConfirmButton:;
- (id)resetButton;
- (id)borderLayer;
- (double)ratio;
- (void)setRatio:;
- (void)setupScrollView;
- (void)cancelButtonHandler;
- (void)setResetButton:;
- (id)cropView;
- (void)setCropView:;
- (void)startEditing;
- (id)topBarView;
- (void)setTopBarView:;
- (void)setBorderLayer:;
- (void)timerTriggered;
- (void)calculate;
@end
