@interface AWEGeneralFilmTelevisionSeriesModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString cID;
@property (nonatomic) q index;
@property (nonatomic) NSArray seriesArray;
@property (nonatomic) BOOL showDivideLine;
- (void)setCID:;
- (void)setShowDivideLine:;
- (id)seriesArray;
- (void)setSeriesArray:;
- (BOOL)showDivideLine;
- (id)cID;
- (void)setIndex:;
- (long long)index;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)seriesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
