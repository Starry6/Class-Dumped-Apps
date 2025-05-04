@interface AWEFeedNearbyMallCardHeaderView : UIView
@property (nonatomic) UIView typeView;
@property (nonatomic) UILabel typeLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) @? tapHandle;
- (void)__setupUI;
- (void)__buildUI;
- (void)__addAction;
- (void)setTypeView:;
- (id)typeView;
- (id)tapHandle;
- (void)setTapHandle:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTypeLabel:;
- (id)typeLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
