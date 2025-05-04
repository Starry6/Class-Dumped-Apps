@interface AWEBaseListSectionSeparator : UICollectionReusableView
@property (nonatomic) UIView separatorView;
@property (nonatomic) {AWEListKitSeparatorInsets=dd} separatorInsets;
@property (nonatomic) UIColor separatorColor;
- (void)setSeparatorColor:;
- (id)separatorColor;
- (id)initWithFrame:;
- (void)setSeparatorView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setupSubviews;
- (id)separatorInsets;
- (void)setSeparatorInsets:;
@end
