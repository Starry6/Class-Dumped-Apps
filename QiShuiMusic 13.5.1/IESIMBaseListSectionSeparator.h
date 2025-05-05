@interface IESIMBaseListSectionSeparator : UICollectionReusableView
@property (nonatomic) UIView separatorView;
@property (nonatomic) {IESIMListKitSeparatorInsets=dd} separatorInsets;
@property (nonatomic) UIColor separatorColor;
- (void)setSeparatorColor:;
- (id)separatorColor;
- (void)layoutSubviews;
- (id)separatorView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSeparatorView:;
- (void)setupSubviews;
- (id)separatorInsets;
- (void)setSeparatorInsets:;
@end
