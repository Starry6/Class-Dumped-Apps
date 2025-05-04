@interface AWEElementLayoutStrategyManager : NSObject
@property (nonatomic) NSMutableDictionary layoutStrategyInfoMap;
@property (nonatomic) NSMutableDictionary layoutStrategyMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registStrategy:;
- (BOOL)registWithStrategyInfo:;
- (id)layoutStrategyInfoMap;
- (id)strategyInfoWithID:;
- (id)layoutStrategyMap;
- (id)pickLayoutStrategyWithStrategyIds:context:;
- (void)setLayoutStrategyInfoMap:;
- (void)setLayoutStrategyMap:;
- (void).cxx_destruct;
+ (id)defaultManager;
@end
