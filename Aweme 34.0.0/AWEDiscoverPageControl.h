@interface AWEDiscoverPageControl : UIView
@property (nonatomic) NSMutableArray dotArray;
@property (nonatomic) Q currentPage;
@property (nonatomic) Q numberOfPages;
@property (nonatomic) UIColor selectedColor;
@property (nonatomic) UIColor unSelectedColor;
- (id)unSelectedColor;
- (void)setUnSelectedColor:;
- (id)dotArray;
- (void)setDotArray:;
- (id)initWithFrame:;
- (void)setSelectedColor:;
- (unsigned long long)currentPage;
- (void)setCurrentPage:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)selectedColor;
- (unsigned long long)numberOfPages;
- (void)setNumberOfPages:;
- (void)_setupUI;
@end
