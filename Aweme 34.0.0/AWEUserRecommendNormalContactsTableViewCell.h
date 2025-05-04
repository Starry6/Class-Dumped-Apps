@interface AWEUserRecommendNormalContactsTableViewCell : UITableViewCell
@property (nonatomic) AWEUserRecommendNormalContactsView basicView;
@property (nonatomic) BOOL isConstColor;
@property (nonatomic) BOOL enableNewStyle;
@property (nonatomic) @? didTappedContactsButtonBlock;
@property (nonatomic) Q contactsAccessoryType;
- (void)setIsConstColor:;
- (id)basicView;
- (void)setBasicView:;
- (id)initWithStyle:reuseIdentifier:isConstColor:;
- (BOOL)isConstColor;
- (void)setContactsAccessoryType:;
- (void)setDidTappedContactsButtonBlock:;
- (unsigned long long)contactsAccessoryType;
- (BOOL)enableNewStyle;
- (void)setEnableNewStyle:;
- (id)didTappedContactsButtonBlock;
- (void)setup;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (double)suggestHeight;
@end
