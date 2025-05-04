@interface AWELuckySDKMotionConfigBroker : NSObject
@property (nonatomic) <BDMotionItemConfigProtocol> itemConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:error:from:;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)setItemConfig:;
- (id)itemConfig;
- (id)initWithItemConfig:;
- (void).cxx_destruct;
@end
