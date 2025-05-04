@interface AWEPzDownGradeLimitStrategy : NSObject
@property (nonatomic) <AWEPzStrategyConfigProtocol> configModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configModel;
- (void)setConfigModel:;
- (BOOL)needDownGrade:;
- (id)initWithConfig:;
- (void).cxx_destruct;
@end
