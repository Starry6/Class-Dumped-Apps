@interface AWEMRDotCountStrategyResult : NSObject
@property (nonatomic) q totalCount;
@property (nonatomic) NSDictionary showMap;
@property (nonatomic) NSDictionary degradedMap;
- (void)setShowMap:;
- (void)setDegradedMap:;
- (id)showMap;
- (id)degradedMap;
- (long long)totalCount;
- (id)description;
- (void).cxx_destruct;
- (void)setTotalCount:;
@end
