@interface AWEPlayInteractionComponentGlobalPriorityStrategy : NSObject
@property (nonatomic) <AWEPzStrategyConfigProtocol> config;
@property (nonatomic) q maxComponentNum;
@property (nonatomic) q componentAvoidPriorityThreshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectComponents:;
- (void)setupConfig:;
- (long long)componentAvoidPriorityThreshold;
- (long long)maxComponentNum;
- (void)setMaxComponentNum:;
- (void)setComponentAvoidPriorityThreshold:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
