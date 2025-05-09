@interface AWEIMSkylightFlashBackCollectionViewCell : AWEIMSkylightBaseCollectionViewCell
@property (nonatomic) AWEIMActiveUserIndicativeView dotView;
@property (nonatomic) UIImageView dotIconView;
@property (nonatomic) PHAsset localAsset;
@property (nonatomic) NSString requestLocalIdentifier;
@property (nonatomic) q localImageRequestID;
@property (nonatomic) AWEBinding cardStyleImageBinding;
- (id)localAsset;
- (void)setLocalAsset:;
- (void)cancelImageRequest;
- (void)renderWithModel:;
- (void)createComponents;
- (void)renderColorRingViewWithModel:;
- (void)setRequestLocalIdentifier:;
- (id)imageSizeWithPHAsset:imageWidth:;
- (id)requestLocalIdentifier;
- (void)setLocalImageRequestID:;
- (long long)localImageRequestID;
- (id)dotIconView;
- (void)setDotIconView:;
- (void)p_setUIImageView:withPHAsset:placeholder:;
- (id)cardStyleImageBinding;
- (void)setCardStyleImageBinding:;
- (void)renderAvatarWithModel:;
- (void)renderIconWithModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)dotView;
- (void)setDotView:;
- (void)layoutComponents;
@end
