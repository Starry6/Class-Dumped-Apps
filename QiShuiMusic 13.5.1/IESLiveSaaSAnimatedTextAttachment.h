@interface IESLiveSaaSAnimatedTextAttachment : NSTextAttachment
@property (nonatomic) IESLiveSaaSAnimatedImageView imageView;
@property (nonatomic) BOOL isAnimated;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) UIView containerView;
@property (nonatomic) {UIEdgeInsets=dddd} textContainerInset;
- (void)setIsAnimated:;
- (id)textContainerInset;
- (id)containerView;
- (void)setContainerView:;
- (BOOL)isAnimated;
- (void).cxx_destruct;
- (void)setTextContainerInset:;
- (id)imageView;
- (id)imageForBounds:textContainer:characterIndex:;
- (void)setImageView:;
- (id)imageUrl;
- (void)setImageUrl:;
@end
