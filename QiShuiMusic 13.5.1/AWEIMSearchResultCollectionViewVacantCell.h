@interface AWEIMSearchResultCollectionViewVacantCell : UICollectionViewCell
@property (nonatomic) <AWEIMSearchResultCellItemProtocol> item;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (id)item;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)_setupUI;
+ (id)identifier;
@end
