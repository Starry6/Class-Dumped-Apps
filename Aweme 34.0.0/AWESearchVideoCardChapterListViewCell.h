@interface AWESearchVideoCardChapterListViewCell : UICollectionViewCell
@property (nonatomic) UILabel descLabel;
@property (nonatomic) BOOL selectedStatus;
- (id)descLabel;
- (void)setDescLabel:;
- (void)updateSelectedStatus:;
- (BOOL)selectedStatus;
- (void)setSelectedStatus:;
- (void)configDataWithChapterInfo:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
+ (double)widthWithString:;
+ (id)identifier;
+ (id)normalFont;
+ (id)boldFont;
@end
