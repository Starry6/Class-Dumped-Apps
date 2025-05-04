@interface AWERecordAuthViewHolder : NSObject
@property (nonatomic) FPStateFlow stateFlow;
@property (nonatomic) UIImageView cameraBlurMaskView;
@property (nonatomic) UIView<AWEStudioAuthorityViewProtocol> authorityView;
@property (nonatomic) ACCAnimatedButton authorityCloseBtn;
@property (nonatomic) AWERecordAuthComponent component;
@property (nonatomic) <FPUIComponent> typeErasedComponent;
- (id)typeErasedComponent;
- (void)setTypeErasedComponent:;
- (id)authorityView;
- (id)stateFlow;
- (id)cameraBlurMaskView;
- (id)cameraGrantAlertCancelBlock:;
- (void)setCameraBlurMaskView:;
- (id)authorityCloseBtn;
- (void)clickAuthorityCloseBtn:;
- (void)setAuthorityView:;
- (void)setAuthorityCloseBtn:;
- (void)setStateFlow:;
- (void)checkAuthorityRestricted:;
- (id)component;
- (void).cxx_destruct;
- (id)initWith:;
- (void)setComponent:;
+ (Class)componentType;
@end
