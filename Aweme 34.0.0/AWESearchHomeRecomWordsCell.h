@interface AWESearchHomeRecomWordsCell : UICollectionViewCell
@property (nonatomic) AWEFeedSearchLongBarWord model;
@property (nonatomic) @? cellTouchBeganBlock;
@property (nonatomic) @? cellTouchCancelBlock;
@property (nonatomic) UILabel textLabel;
- (void)awe_themeWillChange:;
- (void)configWithModel:;
- (id)wordBGColor;
- (id)cellTouchBeganBlock;
- (id)cellTouchCancelBlock;
- (void)setCellTouchBeganBlock:;
- (void)setCellTouchCancelBlock:;
- (id)textLabel;
- (void)setModel:;
- (void)touchesCancelled:withEvent:;
- (id)model;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)layoutSubviews;
- (void)setTextLabel:;
- (void)setupUI;
+ (id)cellSizeForModel:;
@end
