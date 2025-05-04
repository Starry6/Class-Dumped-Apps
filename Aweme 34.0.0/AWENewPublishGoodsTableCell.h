@interface AWENewPublishGoodsTableCell : AWENewPublishTableCell
@property (nonatomic) AWEPaddingButton goodsInfo;
@property (nonatomic) BOOL disable;
- (void)setDisable:;
- (BOOL)isDisable;
- (id)goodsInfo;
- (void)setGoodsInfo:;
- (void)addSubviewsForContentView;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
@end
