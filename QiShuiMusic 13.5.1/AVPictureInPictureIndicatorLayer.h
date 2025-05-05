@interface AVPictureInPictureIndicatorLayer : CALayer
@property (nonatomic) AVPictureInPictureIndicatorSublayer contentLayer;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoRectWhenPIPBegan;
@property (nonatomic) NSString customText;
- (id)init;
- (id)contentLayer;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)initWithDisplayScale:placeholderImage:opaque:videoRectWhenPIPBegan:;
- (void)setCustomText:;
- (id)customText;
- (id)videoRectWhenPIPBegan;
@end
