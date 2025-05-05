@interface TMPrivacyStrategyModel : NSObject
@property (nonatomic) NSDictionary input;
@property (nonatomic) NSDictionary usedStateParams;
@property (nonatomic) NSString scene;
@property (nonatomic) NSArray strategies;
@property (nonatomic) NSArray hitRules;
- (id)usedStateParams;
- (id)hitRules;
- (void)setHitRules:;
- (void)setStrategies:;
- (void)setUsedStateParams:;
- (id)input;
- (void)setScene:;
- (void)setInput:;
- (id)scene;
- (void).cxx_destruct;
- (id)jsonDict;
- (id)strategies;
@end
