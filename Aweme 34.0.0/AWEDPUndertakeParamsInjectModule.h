@interface AWEDPUndertakeParamsInjectModule : NSObject
@property (nonatomic) NSMutableDictionary hpTabStayTimeParams;
@property (nonatomic) NSMutableDictionary playTimeParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_getCustomTrackParamsWithTrackInfo:;
- (id)hpTabStayTimeParams;
- (id)_paramsForPlayTimeWithContext:;
- (id)playTimeParams;
- (id)topChannelController:getCustomTrackParamsWithTrackInfo:;
- (id)bottomChannelController:channelConfig:getCustomTrackParamsWithTrackInfo:;
- (void)addParamsForHPTabStayTimeOnce:tabId:;
- (void)addParamsForPlayTimeOnce:itemId:;
- (void)setHpTabStayTimeParams:;
- (void)setPlayTimeParams:;
- (void).cxx_destruct;
+ (id)playTimeAspect;
+ (id)sharedInstance;
@end
