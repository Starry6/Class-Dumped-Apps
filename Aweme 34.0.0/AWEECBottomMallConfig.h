@interface AWEECBottomMallConfig : NSObject
@property (nonatomic) BOOL isSafeMode;
@property (nonatomic) BOOL isTabMall;
@property (nonatomic) BOOL isDefaultLanding;
@property (nonatomic) NSString mallEnvID;
@property (nonatomic) <IESECMallChannelConfigProtocol> channelConfig;
- (void)setChannelConfig:;
- (id)channelConfig;
- (void)setIsTabMall:;
- (void)setIsDefaultLanding:;
- (void)setIsSafeMode:;
- (void)setMallEnvID:;
- (BOOL)isTabMall;
- (BOOL)isDefaultLanding;
- (id)mallEnvID;
- (BOOL)isSafeMode;
- (void).cxx_destruct;
@end
