@interface AWETeenLoadingButton : UIButton
@property (nonatomic) NSString stashTitle;
@property (nonatomic) UIImage stashImage;
- (id)p_loadingAnimation;
- (void)setStashTitle:;
- (void)setStashImage:;
- (id)p_image:tintColor:blendMode:;
- (id)stashTitle;
- (id)stashImage;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;
@end
