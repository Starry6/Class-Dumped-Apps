@interface AWEMessageReachShowCountManager : NSObject
@property (nonatomic) <AWEMessageReachInternalAbilityProtocol> config;
@property (nonatomic) NSDictionary bizStrategyConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dotCountUpdateRequestWithBiz:unreadModel:completion:;
- (void)setupBizStrategyConfig;
- (id)bizStrategyConfig;
- (void)setBizStrategyConfig:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
@end
