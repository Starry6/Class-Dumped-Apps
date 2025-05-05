@interface AMapPOISearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) AMapSuggestion suggestion;
@property (nonatomic) NSArray pois;
- (void)setPois:;
- (void)setCount:;
- (id)suggestion;
- (void)setSuggestion:;
- (void).cxx_destruct;
- (id)pois;
- (long long)count;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
