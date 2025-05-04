@interface AWEPerfEvaluateBootCollector : NSObject
@property (nonatomic) NSString subType;
@property (nonatomic) NSNumber firstVideoDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onEvent:params:;
- (id)observedEvents;
- (id)firstVideoDuration;
- (void)setFirstVideoDuration:;
- (id)collectFeatures;
- (id)initWithJSONConfig:;
- (void)dealloc;
- (id)subType;
- (id)description;
- (void).cxx_destruct;
@end
