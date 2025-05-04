@interface AWEIMFansGroupCardStyleItemCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView itemBaseView;
@property (nonatomic) UIImageView itemImageView;
@property (nonatomic) UILabel itemTitleLabel;
@property (nonatomic) UIView extraPaddingView;
@property (nonatomic) AWEIMFansGroupManagementEntryViewModel entryViewModel;
- (void)configWithViewModel:;
- (id)entryViewModel;
- (void)__setupUI;
- (void)setEntryViewModel:;
- (id)extraPaddingView;
- (id)itemBaseView;
- (void)setItemBaseView:;
- (void)setExtraPaddingView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)itemImageView;
- (id)itemTitleLabel;
- (void)setItemImageView:;
- (void)setItemTitleLabel:;
+ (id)identifier;
@end
