@interface AWEPerfEvaluateMemoryCollector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectFeatures;
- (id)initWithJSONConfig:;
- (id)generateCompatibleConfig;
- (id)description;
@end
