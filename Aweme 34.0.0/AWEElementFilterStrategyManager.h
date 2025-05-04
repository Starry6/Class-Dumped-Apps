@interface AWEElementFilterStrategyManager : NSObject
@property (nonatomic) NSMutableDictionary strategyInfoMap;
@property (nonatomic) NSMutableDictionary strategiesMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategiesMap;
- (void)setStrategiesMap:;
- (void)registStrategy:;
- (BOOL)registWithStrategyInfo:;
- (id)strategyInfoMap;
- (id)getStrategyInfoWithID:;
- (id)loadStrategiesWithIds:context:;
- (void)setStrategyInfoMap:;
- (void).cxx_destruct;
+ (id)defaultManager;
@end
