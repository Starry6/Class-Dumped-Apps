@interface AWEOpenSearchMerchandiseVideoDetailResultModel : IESLiveBridgeModel
@property (nonatomic) AWEOpenSearchMerchandiseVideoDetailDataModel data;
@property (nonatomic) NSNumber productCardIndex;
@property (nonatomic) NSDictionary innerLoadMoreInfo;
- (id)productCardIndex;
- (void)setProductCardIndex:;
- (id)innerLoadMoreInfo;
- (void)setInnerLoadMoreInfo:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)modelCustomPropertyMapper;
@end
