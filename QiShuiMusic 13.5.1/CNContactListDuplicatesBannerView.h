@interface CNContactListDuplicatesBannerView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) q duplicatesCount;
@property (nonatomic) <CNContactListDuplicatesBannerViewDelegate> delegate;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)countStringForLocalizedStringKey:count:;
- (long long)duplicatesCount;
- (void)setDuplicatesCount:;
- (void)setupSubviews;
- (void)didTapViewDuplicates;
- (void)didTapDismiss;
- (id)initWithDuplicatesCount:;
@end
