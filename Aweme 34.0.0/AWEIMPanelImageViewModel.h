@interface AWEIMPanelImageViewModel : AWEIMPanelViewModel
@property (nonatomic) UIImage image;
@property (nonatomic) NSString imageRemoteURLString;
@property (nonatomic) double cornerRadius;
@property (nonatomic) {CGSize=dd} imageViewSize;
@property (nonatomic) q alignment;
- (id)imageRemoteURLString;
- (void)setImageRemoteURLString:;
- (id)init;
- (id)image;
- (void)setImage:;
- (void)setAlignment:;
- (void)setCornerRadius:;
- (id)imageViewSize;
- (void).cxx_destruct;
- (double)cornerRadius;
- (long long)alignment;
- (void)setImageViewSize:;
@end
