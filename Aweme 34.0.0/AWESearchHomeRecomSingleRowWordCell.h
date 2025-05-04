@interface AWESearchHomeRecomSingleRowWordCell : UICollectionViewCell
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView separator;
@property (nonatomic) AWEFeedSearchLongBarWord model;
@property (nonatomic) @? cellTouchBeganBlock;
@property (nonatomic) @? cellTouchCancelBlock;
- (void)awe_themeWillChange:;
- (void)configWithModel:index:;
- (id)wordBGColor;
- (id)cellTouchBeganBlock;
- (id)cellTouchCancelBlock;
- (void)setCellTouchBeganBlock:;
- (void)setCellTouchCancelBlock:;
- (id)textLabel;
- (void)setModel:;
- (void)setSeparator:;
- (id)separator;
- (void)touchesCancelled:withEvent:;
- (id)model;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)setTextLabel:;
- (void)setupUI;
+ (double)cellMaxWidth;
+ (id)cellSizeForModel:;
+ (double)widthForTwoWords;
+ (double)widthForOneWord;
+ (double)cellHeight;
@end
