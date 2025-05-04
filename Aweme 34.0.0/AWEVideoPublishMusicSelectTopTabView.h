@interface AWEVideoPublishMusicSelectTopTabView : UIView
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray views;
- (void)refreshWithClickedItemData:;
- (void)setItemClicked:;
- (id)initWithItems:;
- (id)items;
- (id)intrinsicContentSize;
- (void)setItems:;
- (id)views;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setViews:;
@end
