@interface AWEIMRefreshImageViewPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? setImageURLCompletionBlock;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) UIImage placeholderImage;
- (id)setImageURLCompletionBlock;
- (void)setSetImageURLCompletionBlock:;
- (id)placeholderImage;
- (void)setPlaceholderImage:;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
@end
