@interface IESLiveAnimatedTextAttachment : NSTextAttachment
@property (nonatomic) IESLiveAnimatedImageView imageView;
@property (nonatomic) BOOL isAnimated;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) UIView containerView;
@property (nonatomic) {UIEdgeInsets=dddd} textContainerInset;
@property (nonatomic) double alignFontSize;
@property (nonatomic) BOOL adjustImageViewFrame;
- (BOOL)adjustImageViewFrame;
- (double)alignFontSize;
- (void)setAdjustImageViewFrame:;
- (void)setAlignFontSize:;
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
