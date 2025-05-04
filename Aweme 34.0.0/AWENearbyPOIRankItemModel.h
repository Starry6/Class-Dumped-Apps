@interface AWENearbyPOIRankItemModel : AWEBaseApiModel
@property (nonatomic) AWEPOIContentItemModel poiInfoModel;
@property (nonatomic) Q rankIndex;
@property (nonatomic) NSString rankScore;
- (unsigned long long)rankIndex;
- (void)setRankIndex:;
- (id)poiInfoModel;
- (void)setPoiInfoModel:;
- (void).cxx_destruct;
- (id)rankScore;
- (void)setRankScore:;
+ (id)JSONKeyPathsByPropertyKey;
@end
