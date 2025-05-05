@interface ICDocCamThumbnailZoomTransitionAnimator : NSObject
@property (nonatomic) UIImage thumbnailImage;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) double duration;
@property (nonatomic) @? completion;
@property (nonatomic) BOOL presenting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)completion;
- (id)thumbnailImage;
- (void)setPresenting:;
- (void)animateTransition:;
- (void)setCompletion:;
- (double)transitionDuration:;
- (void)setIndexPath:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)indexPath;
- (double)duration;
- (BOOL)presenting;
- (BOOL)_shouldCrossFadeNavigationBar;
- (void)setThumbnailImage:;
- (id)initWithImage:indexPath:duration:completion:;
@end
