@interface MKTransitSystemFilterHeaderFooterView : UITableViewHeaderFooterView
@property (nonatomic) NSString titleText;
@property (nonatomic) MKTransitSystemFilterView filterView;
- (void)setTitleText:;
- (id)titleText;
- (void)_setupConstraints;
- (id)initWithFrame:;
- (id)filterView;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_contentSizeDidChange;
@end
