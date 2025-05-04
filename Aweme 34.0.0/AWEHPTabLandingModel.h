@interface AWEHPTabLandingModel : NSObject
@property (nonatomic) NSString targetTabId;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary bizCommunicationParams;
@property (nonatomic) NSArray previousTabIds;
@property (nonatomic) NSString enterScene;
@property (nonatomic) NSString landingPitayaTraceId;
@property (nonatomic) NSString landingStrategyId;
@property (nonatomic) NSString landingStrategyType;
- (void)setTargetTabId:;
- (id)targetTabId;
- (id)landingStrategyId;
- (void)setLandingStrategyId:;
- (void)setPreviousTabIds:;
- (id)enterScene;
- (void)setEnterScene:;
- (id)initWithTargetTabID:params:;
- (id)previousTabIds;
- (id)landingPitayaTraceId;
- (id)bizCommunicationParams;
- (void)setBizCommunicationParams:;
- (void)setLandingPitayaTraceId:;
- (id)landingStrategyType;
- (void)setLandingStrategyType:;
- (id)description;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
