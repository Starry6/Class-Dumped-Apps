@interface IESLiveLinkLiveDualStreamParam : NSObject
@property (nonatomic) q remoteDefaultStreamType;
@property (nonatomic) q isAutoSwitch;
@property (nonatomic) q autoSwitchUserNumber;
@property (nonatomic) IESLiveLinkLiveVideoParam hdVideoParam;
@property (nonatomic) q hdSubIndex;
@property (nonatomic) IESLiveLinkLiveVideoParam sdVideoParam;
@property (nonatomic) q sdSubIndex;
- (long long)autoSwitchUserNumber;
- (long long)hdSubIndex;
- (id)hdVideoParam;
- (long long)isAutoSwitch;
- (long long)remoteDefaultStreamType;
- (long long)sdSubIndex;
- (id)sdVideoParam;
- (void)setAutoSwitchUserNumber:;
- (void)setHdSubIndex:;
- (void)setHdVideoParam:;
- (void)setIsAutoSwitch:;
- (void)setRemoteDefaultStreamType:;
- (void)setSdSubIndex:;
- (void)setSdVideoParam:;
- (id)init;
- (void).cxx_destruct;
@end
