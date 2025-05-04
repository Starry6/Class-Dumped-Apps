@interface AWEPerfEvaluatePlayCollector : NSObject
@property (nonatomic) NSNumber firstRenderDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onEvent:params:;
- (id)observedEvents;
- (id)collectFeatures;
- (id)initWithJSONConfig:;
- (id)firstRenderDuration;
- (void)setFirstRenderDuration:;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
@end
