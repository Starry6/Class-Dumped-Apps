@interface AWEDCFeedTapGuideView : UIView
@property (nonatomic) LOTAnimationView imageView;
@property (nonatomic) UILabel textLabel;
- (void)addNotifications;
- (void)removeSelf;
- (void)showByOrder;
- (id)textLabel;
- (void)appDidEnterBackground:;
- (id)init;
- (void)dealloc;
- (void)appWillResignActive:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setTextLabel:;
- (void)setupUI;
@end
