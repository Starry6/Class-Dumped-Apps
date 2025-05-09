@interface CJPayBankCardOCRViewController : CJPayCardOCRViewController
@property (nonatomic) UIView photoIconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) double ocrAppearTime;
@property (nonatomic) double albumAppearTime;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIImageView errorImageView;
@property (nonatomic) UILabel errorTipsLabel;
@property (nonatomic) BOOL isRunningErrorTipsAnimation;
@property (nonatomic) double lastErrorTipsAnimationTime;
@property (nonatomic) BOOL errorTipsHasShowed;
@property (nonatomic) MASConstraint photoIconBottomConstraint;
@property (nonatomic) MASConstraint photoIconTopConstraint;
@property (nonatomic) Q requestCount;
@property (nonatomic) Q callbackCount;
@property (nonatomic) BOOL isFirstSampleOutput;
@property (nonatomic) q minLength;
@property (nonatomic) q maxLength;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsRunningErrorTipsAnimation:;
- (double)albumAppearTime;
- (void)alertTimeOut;
- (unsigned long long)callbackCount;
- (void)completionCallBackWithResult:;
- (id)errorImageView;
- (BOOL)errorTipsHasShowed;
- (id)errorTipsLabel;
- (BOOL)isFirstSampleOutput;
- (BOOL)isRunningErrorTipsAnimation;
- (double)lastErrorTipsAnimationTime;
- (double)ocrAppearTime;
- (void)p_alertPhotoOCRFail:;
- (id)p_buildBDPayCardOCRRequestParam:;
- (void)p_compressAndUploadImage:;
- (id)p_cropImage:;
- (BOOL)p_isSatisfyRuleWithCardNoStr:;
- (void)p_localScanImage:isFromUploadPhoto:;
- (void)p_scanWithImage:;
- (void)p_scanWithSelectPhotoImgData:;
- (void)p_selectPhotoToOCR;
- (void)p_selectPhotoToOCRButton:;
- (void)p_showImagePicker;
- (void)p_showOCRErrorTips:;
- (id)photoIconBottomConstraint;
- (id)photoIconImageView;
- (id)photoIconTopConstraint;
- (void)setAlbumAppearTime:;
- (void)setCallbackCount:;
- (void)setErrorImageView:;
- (void)setErrorTipsHasShowed:;
- (void)setErrorTipsLabel:;
- (void)setIsFirstSampleOutput:;
- (void)setLastErrorTipsAnimationTime:;
- (void)setOcrAppearTime:;
- (void)setPhotoIconBottomConstraint:;
- (void)setPhotoIconImageView:;
- (void)setPhotoIconTopConstraint:;
- (void)setTipsLabel:;
- (id)tipsLabel;
- (void)trackResult:;
- (void)presentationControllerDidDismiss:;
- (void)setRequestCount:;
- (void)setTitleLabel:;
- (long long)maxLength;
- (void)setMaxLength:;
- (long long)minLength;
- (void)captureOutput:didOutputSampleBuffer:fromConnection:;
- (void).cxx_destruct;
- (void)setMinLength:;
- (id)titleLabel;
- (unsigned long long)requestCount;
- (void)viewDidLoad;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)setupUI;
- (void)picker:didFinishPicking:;
@end
