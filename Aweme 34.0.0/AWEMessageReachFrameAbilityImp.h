@interface AWEMessageReachFrameAbilityImp : NSObject
@property (nonatomic) <AWEMessageReachInternalAbilityProtocol> config;
@property (nonatomic) <AWEMessageReachPluginAbilityProtocol> channelPlugin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearMessageReachAllStatus:;
- (id)initWithConfig:channelPlugin:;
- (void)setChannelPlugin:;
- (id)channelPlugin;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
@end
