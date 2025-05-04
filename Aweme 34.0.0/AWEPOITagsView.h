@interface AWEPOITagsView : UIView
@property (nonatomic) q numberOfItems;
@property (nonatomic) q lineCount;
@property (nonatomic) <AWEPOITagsViewDataSource> dataSource;
@property (nonatomic) double lineSpace;
@property (nonatomic) double space;
@property (nonatomic) q maxNumberOfLines;
- (long long)maxNumberOfLines;
- (void)setMaxNumberOfLines:;
- (double)lineSpace;
- (void)setLineSpace:;
- (double)updateTagsFrameWithMaxWidth:maxHeight:;
- (double)getHeightWithMaxWidth:maxHeight:;
- (void)reloadData;
- (long long)numberOfItems;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (long long)lineCount;
- (void).cxx_destruct;
- (void)setNumberOfItems:;
- (void)setDataSource:;
- (void)layoutSubviews;
- (id)dataSource;
- (double)space;
- (void)setLineCount:;
- (void)setSpace:;
@end
