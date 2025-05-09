@interface AWESearchFloatingContentImageView : UIView
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWESearchBackgroundImageModel imageModel;
@property (nonatomic) UIScrollView horizontalScrollView;
@property (nonatomic) UIScrollView verticalScrollView;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) double horizontalRange;
@property (nonatomic) double verticalOffset;
@property (nonatomic) Q horizontalStyle;
- (id)imageModel;
- (void)addNotifications;
- (void)onAWEUIThemeChangeNotification;
- (void)horizontalScrollViewOffsetChanged;
- (unsigned long long)horizontalStyle;
- (void)verticalScrollViewOffsetChanged;
- (void)setHorizontalStyle:;
- (double)horizontalRange;
- (void)p_reloadImage;
- (void)reloadImageModel:;
- (void)setHorizontalRange:;
- (void)dealloc;
- (id)initWithFrame:;
- (void)removeNotifications;
- (id)imageURL;
- (void)setHorizontalOffset:;
- (void).cxx_destruct;
- (double)horizontalOffset;
- (void)layoutSubviews;
- (id)verticalScrollView;
- (void)setImageView:;
- (void)setImageURL:;
- (id)horizontalScrollView;
- (id)imageView;
- (double)verticalOffset;
- (void)setupUI;
- (void)setVerticalOffset:;
- (void)setHorizontalScrollView:;
- (void)setVerticalScrollView:;
@end
