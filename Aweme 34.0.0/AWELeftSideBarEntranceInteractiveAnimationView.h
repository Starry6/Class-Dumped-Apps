@interface AWELeftSideBarEntranceInteractiveAnimationView : UIView
@property (nonatomic) DUXBaseImageView imageView;
- (void)showOnView:withCompletion:withDismissOffset:withDismissCompletion:;
- (void)p_showDismissAnimationWithDismissOffset:withCompletion:;
- (void)p_showSpringAnimationWithCompletion:;
- (id)initWithImage:shape:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
+ (id)imageSizeWithShape:;
@end
