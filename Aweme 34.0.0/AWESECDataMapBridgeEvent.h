@interface AWESECDataMapBridgeEvent : SECHybridPiperEvent
@property (nonatomic) NSDictionary rulerParamsDict;
- (id)rulerParamsDict;
- (id)dictionaryWithRuleEngineParams:;
- (void)setRulerParamsDict:;
- (id)initWithPiperContext:;
- (id)eventType;
- (void).cxx_destruct;
- (id)dictRepresentation;
@end
