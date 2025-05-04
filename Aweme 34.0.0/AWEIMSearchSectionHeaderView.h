@interface AWEIMSearchSectionHeaderView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView accessoryView;
@property (nonatomic) UIButton btn;
@property (nonatomic) <AWEIMSearchResultCellHeaderItemProtocol> item;
@property (nonatomic) <AWEIMSearchSectionHeaderViewProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (id)btn;
- (void)setBtn:;
- (void)onSectionHeaderTap;
- (id)delegate;
- (id)accessoryView;
- (void)setAccessoryView:;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
+ (id)identifier;
@end
