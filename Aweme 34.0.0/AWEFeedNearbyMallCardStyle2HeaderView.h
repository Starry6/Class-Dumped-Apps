@interface AWEFeedNearbyMallCardStyle2HeaderView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel horizontalLine;
@property (nonatomic) double headerTopPadding;
@property (nonatomic) double horizontalTopPadding;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) @? tapHandle;
- (void)__setupUI;
- (void)setHorizontalLine:;
- (void)__addAction;
- (id)tapHandle;
- (void)setTapHandle:;
- (id)initWithHeaderTopPadding:horizontalTopPadding:;
- (double)horizontalTopPadding;
- (void)setHorizontalTopPadding:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setHeaderTopPadding:;
- (double)headerTopPadding;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)horizontalLine;
@end
