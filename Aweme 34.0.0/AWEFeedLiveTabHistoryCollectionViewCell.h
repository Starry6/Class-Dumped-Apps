@interface AWEFeedLiveTabHistoryCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel title;
@property (nonatomic) FeedItem cellModel;
@property (nonatomic) @? historyDidClicked;
- (void)setCellModel:;
- (void)configWithCellModel:;
- (void)setHistoryDidClicked:;
- (id)historyDidClicked;
- (void)clickHistory:;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setupViews;
- (id)cellModel;
+ (id)reuseIdentifier;
@end
