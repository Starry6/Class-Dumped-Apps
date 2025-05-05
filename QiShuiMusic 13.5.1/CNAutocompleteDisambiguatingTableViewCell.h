@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell
@property (nonatomic) UIImageView checkmarkImageView;
@property (nonatomic) BOOL checkmarkVisible;
@property (nonatomic) UIView checkmarkView;
- (id)initWithStyle:reuseIdentifier:;
- (id)titleTextStyle;
- (void).cxx_destruct;
- (void)setRecipient:;
- (id)checkmarkView;
- (BOOL)isCheckmarkVisible;
- (void)setCheckmarkVisible:;
- (id)checkmarkImageView;
- (void)setCheckmarkImageView:;
- (BOOL)canCollapseRecipient;
- (double)leadingInsetsFromCurrentMargins:;
+ (id)identifier;
+ (id)createCheckmarkView;
@end
