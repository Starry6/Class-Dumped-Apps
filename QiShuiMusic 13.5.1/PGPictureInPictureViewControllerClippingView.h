@interface PGPictureInPictureViewControllerClippingView : UIView
@property (nonatomic) BOOL ignoreCornerRadiusUpdates;
- (void)_setContinuousCornerRadius:;
- (BOOL)ignoreCornerRadiusUpdates;
- (void)setIgnoreCornerRadiusUpdates:;
@end
