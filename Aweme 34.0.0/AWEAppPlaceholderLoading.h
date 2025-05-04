@interface AWEAppPlaceholderLoading : UIView
@property (nonatomic) LOTAnimationView loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissWithAnimated:;
- (void)stopAnimating;
- (id)init;
- (void)setLoadingView:;
- (id)loadingView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)startAnimating;
+ (id)showAppPlaceholderLoadingOnView:;
+ (id)showAppPlaceholderLoadingOnView:animated:;
@end
