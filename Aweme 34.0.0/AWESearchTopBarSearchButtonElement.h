@interface AWESearchTopBarSearchButtonElement : AWESearchTopBarBaseElement
@property (nonatomic) UILabel searchButton;
- (void)searchButtonTapped;
- (void)updateElementsLayoutWithFrame:;
- (void)searchButtonTouchDown;
- (void)searchButtonTouchCancel;
- (id)searchButton;
- (id)initWithDelegate:;
- (void).cxx_destruct;
- (void)setSearchButton:;
- (void)setupUI;
@end
