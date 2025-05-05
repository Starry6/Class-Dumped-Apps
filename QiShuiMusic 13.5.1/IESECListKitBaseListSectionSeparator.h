@interface IESECListKitBaseListSectionSeparator : UICollectionReusableView
@property (nonatomic) UIView separatorView;
@property (nonatomic) {IESECListKitSeparatorInsets=dd} separatorInsets;
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
