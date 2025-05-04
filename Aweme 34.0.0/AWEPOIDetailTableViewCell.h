@interface AWEPOIDetailTableViewCell : UITableViewCell
@property (nonatomic) UIView cellSeparator;
- (void)p_setup;
- (void)p_setupSeparator;
- (void)setCellSeparator:;
- (id)cellSeparator;
- (id)initWithFrame:;
- (void)setup;
- (void)awakeFromNib;
- (void)showSeparator;
- (void).cxx_destruct;
- (void)hideSeparator;
+ (id)titleTextFont;
+ (id)titleTextColor;
+ (double)leadingSpace;
@end
