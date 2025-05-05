@interface DJTableViewVMSegmentedRow : DJTableViewVMRow
@property (nonatomic) q selectIndex;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) NSArray segmentedTitles;
@property (nonatomic) NSArray segmentedImages;
@property (nonatomic) @? indexValueChangeHandler;
- (id)segmentedImages;
- (void)setSelectIndex:;
- (id)indexValueChangeHandler;
- (id)initWithTitle:segmentedControlImages:index:switchValueChangeHandler:;
- (id)initWithTitle:segmentedControlTitles:index:switchValueChangeHandler:;
- (long long)selectIndex;
- (void)setIndexValueChangeHandler:;
- (void)setSegmentedImages:;
- (void)setSegmentedTitles:;
- (id)tintColor;
- (void).cxx_destruct;
- (void)setTintColor:;
- (id)segmentedTitles;
@end
