@interface AWEUndertakeStrategyDataModel : MTLModel
@property (nonatomic) NSString strategyID;
@property (nonatomic) NSString strategyType;
@property (nonatomic) AWEUndertakeStrategyTrigActionsModel triggerActions;
@property (nonatomic) AWEUGShowFreqControlsModel showFreqControls;
@property (nonatomic) NSDictionary extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)triggerActions;
- (void)setStrategyID:;
- (void)setStrategyType:;
- (id)strategyID;
- (id)strategyType;
- (void)setTriggerActions:;
- (id)showFreqControls;
- (void)setShowFreqControls:;
- (void).cxx_destruct;
- (id)extraData;
- (void)setExtraData:;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
