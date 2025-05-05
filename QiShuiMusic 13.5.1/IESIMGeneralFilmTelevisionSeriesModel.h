@interface IESIMGeneralFilmTelevisionSeriesModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString cID;
@property (nonatomic) q index;
@property (nonatomic) NSArray seriesArray;
@property (nonatomic) BOOL showDivideLine;
- (id)cID;
- (void)setCID:;
- (void)setSeriesArray:;
- (id)seriesArray;
- (void)setShowDivideLine:;
- (BOOL)showDivideLine;
- (void)setName:;
- (long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)name;
+ (id)seriesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
