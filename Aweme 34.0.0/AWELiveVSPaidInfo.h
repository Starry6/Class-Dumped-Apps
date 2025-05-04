@interface AWELiveVSPaidInfo : AWEBaseApiModel
@property (nonatomic) q paidType;
@property (nonatomic) q viewRight;
@property (nonatomic) q feedDuration;
@property (nonatomic) NSArray freeViewRanges;
@property (nonatomic) NSArray goodsInfos;
- (long long)paidType;
- (void)setPaidType:;
- (long long)viewRight;
- (void)setViewRight:;
- (id)goodsInfos;
- (id)freeViewRanges;
- (void)setFreeViewRanges:;
- (void)setGoodsInfos:;
- (void).cxx_destruct;
- (long long)feedDuration;
- (void)setFeedDuration:;
+ (id)goodsInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
