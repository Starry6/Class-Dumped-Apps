@interface AWEIMSearchResultCollectionViewVacantCell : UICollectionViewCell
@property (nonatomic) <AWEIMSearchResultCellItemProtocol> item;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)_setupUI;
+ (id)identifier;
@end
