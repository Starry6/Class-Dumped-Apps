@interface UgenV3ImageView : UgenV3BaseView
@property (nonatomic) BOOL isGif;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) {UIEdgeInsets=dddd} ugenLayoutMargins;
@property (nonatomic) <UgenV3ImageViewDelegate> delegate;
- (BOOL)isGif;
- (id)real_contentImageViewFrame;
- (void)setIsGif:;
- (void)setUgenLayoutMargins:;
- (id)ugenLayoutMargins;
- (void)updateWithImageUrlString:contentMode:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
@end
