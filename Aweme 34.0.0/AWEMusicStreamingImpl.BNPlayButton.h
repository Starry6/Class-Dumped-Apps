@interface AWEMusicStreamingImpl.BNPlayButton : UIView
@property (nonatomic) BOOL isCountHidden;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) NSInteger count;
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL isHiddenImage;
@property (nonatomic) _TtC21AWEMusicStreamingImpl17BNImageLayoutView button;
- (BOOL)isCountHidden;
- (void)setIsCountHidden:;
- (BOOL)isHiddenImage;
- (void)setIsHiddenImage:;
- (id)image;
- (void)setCount:;
- (void)setImage:;
- (id)initWithFrame:;
- (int)count;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)button;
- (id)imageView;
@end
