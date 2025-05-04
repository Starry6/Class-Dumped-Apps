@interface AWESearchBackgroundImageView : UIView
@property (nonatomic) BDImageView bgImageView;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) AWESearchBackgroundBGImageModel model;
@property (nonatomic) BOOL fillView;
- (void)updateImageViewFrame;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)imageSize;
- (void)layoutSubviews;
- (BOOL)fillView;
- (void)setFillView:;
- (void)updateWithModel:;
- (void)setBgImageView:;
- (id)bgImageView;
@end
