@interface AWESearchMerchandiseProductDoubleInfos : AWEBaseApiModel
@property (nonatomic) NSArray infosArray;
@property (nonatomic) q pointType;
@property (nonatomic) NSString sellingPtInfo;
- (id)sellingPtInfo;
- (void)setSellingPtInfo:;
- (id)infosArray;
- (void)setInfosArray:;
- (void).cxx_destruct;
- (long long)pointType;
- (void)setPointType:;
+ (id)infosArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
