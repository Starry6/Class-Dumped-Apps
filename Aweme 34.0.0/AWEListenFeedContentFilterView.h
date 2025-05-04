@interface AWEListenFeedContentFilterView : UIView
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) AWEListenFeedContentModel model;
@property (nonatomic) AWEListenFeedContext context;
@property (nonatomic) q count;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)updateByModel:;
- (void)trackListenModelClick;
- (void)enterSecondPage;
- (void)setModel:;
- (id)init;
- (void)setCount:;
- (long long)count;
- (id)model;
- (void)setTitleLabel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)context;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)tapAction;
- (void)configLayout;
- (void)initUI;
@end
