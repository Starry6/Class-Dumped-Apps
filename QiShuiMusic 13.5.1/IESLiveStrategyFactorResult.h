@interface IESLiveStrategyFactorResult : NSObject
@property (nonatomic) NSMutableDictionary onlineDict;
@property (nonatomic) NSMutableDictionary expDict;
@property (nonatomic) NSMutableDictionary constrastDict;
- (id)factor:;
- (id)expDict;
- (void)addConstrastFactors:;
- (id)allConstrastFactorsInfactor:;
- (id)constrastDict;
- (id)onlineDict;
- (void)removeAllConstrastFactors;
- (void)setConstrastDict:;
- (void)setExpDict:;
- (void)setOnlineDict:;
- (void)updateFactors:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)updateFactor:;
@end
