@interface IESLiveAudioThemePreviewController : UIViewController
@property (nonatomic) @? completionBlock;
@property (nonatomic) <IESLivePhotoPickerAsset> asset;
@property (nonatomic) IESLiveAudioThemePreviewView previewView;
@property (nonatomic) IESLiveAudioThemePreviewTempLiveView tempLiveView;
@property (nonatomic) UIView previewMaskView;
@property (nonatomic) UILabel cropTipsLabel;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) double ratio;
@property (nonatomic) UIView cropMaskView;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)previewMaskView;
- (double)convertedFloat:;
- (id)cropImage:convertRect:;
- (id)cropMaskView;
- (id)cropTipsLabel;
- (id)initWithAsset:completion:;
- (id)relativeCropRect;
- (void)setCropMaskView:;
- (void)setCropTipsLabel:;
- (void)setPreviewMaskView:;
- (void)setTempLiveView:;
- (id)tempLiveView;
- (id)previewView;
- (void)setScrollView:;
- (id)viewForZoomingInScrollView:;
- (id)asset;
- (id)cropRect;
- (void)setCompletionBlock:;
- (void)setCropRect:;
- (void)cancelAction;
- (id)scrollView;
- (void)viewWillDisappear:;
- (id)resourceSize;
- (void).cxx_destruct;
- (void)setPreviewView:;
- (void)setCancelButton:;
- (void)setAsset:;
- (id)completionBlock;
- (id)cancelButton;
- (void)viewDidLoad;
- (void)confirmAction;
- (id)confirmButton;
- (void)setConfirmButton:;
- (double)ratio;
- (void)setRatio:;
- (void)setActionEnabled:;
@end
