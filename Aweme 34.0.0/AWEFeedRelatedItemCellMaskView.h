@interface AWEFeedRelatedItemCellMaskView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView justWatchedImageView;
@property (nonatomic) UILabel justWatchedLabel;
- (id)justWatchedLabel;
- (id)justWatchedImageView;
- (void)setJustWatchedImageView:;
- (void)setJustWatchedLabel:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
@end
