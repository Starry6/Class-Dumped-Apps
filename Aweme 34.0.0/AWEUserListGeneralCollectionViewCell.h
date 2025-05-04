@interface AWEUserListGeneralCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEUserListGeneralCellView basicView;
- (void)setupWithConfig:;
- (void)highlightWithColor:completion:;
- (id)basicView;
- (void)setBasicView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void).cxx_destruct;
+ (id)identifier;
@end
