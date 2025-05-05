@interface AMapPOIExtension : AMapSearchObject
@property (nonatomic) double rating;
@property (nonatomic) double cost;
@property (nonatomic) NSString openTime;
- (id)openTime;
- (void)setOpenTime:;
- (double)rating;
- (double)cost;
- (void).cxx_destruct;
- (void)setRating:;
- (void)setCost:;
+ (id)ajo_mapping;
@end
