@interface AMapBusLineSearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) AMapSuggestion suggestion;
@property (nonatomic) NSArray buslines;
- (id)buslines;
- (void)setBuslines:;
- (void)setCount:;
- (id)suggestion;
- (void)setSuggestion:;
- (void).cxx_destruct;
- (long long)count;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
