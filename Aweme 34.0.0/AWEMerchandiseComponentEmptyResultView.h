@interface AWEMerchandiseComponentEmptyResultView : UIView
@property (nonatomic) NSMutableArray itemSuperViews;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager filterManager;
@property (nonatomic) double maxWidth;
@property (nonatomic) <AWEMerchandiseComponentEmptyResultViewDelegate> delegate;
@property (nonatomic) NSDictionary searchInfoDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterManager;
- (void)setFilterManager:;
- (void)setSearchInfoDict:;
- (id)searchInfoDict;
- (void)emptyResultItemView:didClickClearWithModel:;
- (id)itemSuperViews;
- (void)setItemSuperViews:;
- (void)updateWithFilterManager:maxWidth:;
- (void)layoutIfNeeded;
- (id)delegate;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (void)calculateWidthWithFilterManager:maxWidth:completion:;
+ (double)heightWithFilterManager:maxWidth:;
@end
