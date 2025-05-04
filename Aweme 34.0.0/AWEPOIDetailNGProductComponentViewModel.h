@interface AWEPOIDetailNGProductComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEPOIProductInfoModel productInfo;
@property (nonatomic) AWEPOIDetailInfoProductCellViewModel bizViewModel;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (id)bizViewModel;
- (void)setBizViewModel:;
- (void)setupBizViewModel;
- (id)initWithNode:;
- (void)parseData:;
- (id)productInfo;
- (void).cxx_destruct;
- (void)setProductInfo:;
@end
