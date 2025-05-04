@interface AWEPOIVirgoCharactersManager : NSObject
@property (nonatomic) NSMutableDictionary customCharacters;
@property (nonatomic) <AWELiveStrategyServiceAdapter> smartStrategyService;
@property (nonatomic) AWEPOIClientSmartService clientSmartService;
- (id)characterValueForKey:;
- (id)characterValueForKey:sourceType:;
- (void)updateCharacters:sourceType:;
- (id)customCharacters;
- (id)smartStrategyService;
- (id)clientSmartService;
- (void)setCustomCharacters:;
- (void)setSmartStrategyService:;
- (void)setClientSmartService:;
- (void).cxx_destruct;
@end
