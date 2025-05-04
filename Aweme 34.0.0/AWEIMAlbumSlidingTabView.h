@interface AWEIMAlbumSlidingTabView : UIView
@property (nonatomic) NSArray itemsArray;
@property (nonatomic) UIStackView horizontalStackView;
@property (nonatomic) UIView lineView;
@property (nonatomic) <AWEIMAlbumSlidingTabViewDelegate> delegate;
@property (nonatomic) q selectIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)selectIndex;
- (void)setSelectIndex:;
- (void)p_setupConstraints;
- (id)initWithTitleArray:;
- (void)slidingTabItemDidClick:;
- (void)p_setupViewsWithTitleArray:;
- (double)p_screenWidth;
- (void)updateLineViewForScllviewDidScroll:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)lineView;
- (void)setLineView:;
- (id)horizontalStackView;
- (void)setHorizontalStackView:;
- (id)itemsArray;
- (void)setItemsArray:;
@end
