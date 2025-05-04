@interface AWEAdSimilarRecommendMaskBackView : UIView
@property (nonatomic) @? tapCallback;
@property (nonatomic) BOOL hasTrack;
@property (nonatomic) BOOL imageLoadFinished;
- (void)viewTap:;
- (id)tapCallback;
- (void)setTapCallback:;
- (void)setHasTrack:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)hasTrack;
- (BOOL)imageLoadFinished;
- (void)setImageLoadFinished:;
@end
