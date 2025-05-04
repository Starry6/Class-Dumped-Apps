@interface AWENaviEmotionColletionCell : TTKNaviBaseSelectableCollectionViewCell
@property (nonatomic) AWENaviDownloadStatusView downloadView;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel label;
- (void)configWithEmotion:;
- (id)accessibilityLabel;
- (id)icon;
- (id)accessibilityElements;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (void)setupViews;
- (id)downloadView;
- (void)setDownloadView:;
@end
