@interface AWEIMSkyFlashBackAvatarComponent : AWEIMSkylightBaseComponent
@property (nonatomic) PHAsset localAsset;
@property (nonatomic) NSString requestLocalIdentifier;
@property (nonatomic) q localImageRequestID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)localAsset;
- (void)setLocalAsset:;
- (void)cancelImageRequest;
- (void)updateComponentAfterModelUpdate;
- (void)skyCellWillDisplay;
- (void)p_updatePresenter;
- (void)p_setUIImageViewWithPHAsset:placeholder:;
- (void)setRequestLocalIdentifier:;
- (id)imageSizeWithPHAsset:imageWidth:;
- (id)requestLocalIdentifier;
- (void)setLocalImageRequestID:;
- (long long)localImageRequestID;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
