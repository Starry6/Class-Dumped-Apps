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
- (id)btn;
- (void)setBtn:;
- (void)onSectionHeaderTap;
- (void)renderModel:context:;
- (id)item;
- (void)setTitleLabel:;
- (void)setAccessoryView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (void)setItem:;
- (id)accessoryView;
- (id)delegate;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
+ (id)identifier;
@end
