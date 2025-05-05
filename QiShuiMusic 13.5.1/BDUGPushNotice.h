@interface BDUGPushNotice : NSObject
@property (nonatomic) q isMainSwitchClosed;
@property (nonatomic) NSArray sceneSwitchList;
@property (nonatomic) BDUGPushMuteStatus muteStatus;
- (id)sceneSwitchList;
- (long long)isMainSwitchClosed;
- (void)mapFromJSON:;
- (id)muteStatus;
- (void)setIsMainSwitchClosed:;
- (void)setMuteStatus:;
- (void)setSceneSwitchList:;
- (id)initWithJSON:;
- (void).cxx_destruct;
- (id)toJSON;
@end
