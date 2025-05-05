@interface IESLiveAudioBackgroundAnimatedView : UIView
@property (nonatomic) BOOL cacheAllFrame;
@property (nonatomic) double ratio;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> backgroundAnimatedView;
@property (nonatomic) BDImageView imageView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleRect;
- (id)backgroundAnimatedView;
- (BOOL)cacheAllFrame;
- (id)initWithCacheAllFrame:ratio:;
- (void)setBackgroundAnimatedView:;
- (void)setCacheAllFrame:;
- (void)setImageData:visibleRect:;
- (void)setImageUrls:visibleRect:;
- (void)setVisibleRect:;
- (id)visibleRect;
- (void)layoutSubviews;
- (void)setImage:;
- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (double)ratio;
- (void)setRatio:;
@end
