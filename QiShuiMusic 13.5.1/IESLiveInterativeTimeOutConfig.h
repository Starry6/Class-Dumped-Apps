@interface IESLiveInterativeTimeOutConfig : NSObject
@property (nonatomic) Q inviteTimeout;
@property (nonatomic) Q applyTimeout;
- (unsigned long long)applyTimeout;
- (void)setApplyTimeout:;
- (void)setInviteTimeout:;
- (unsigned long long)inviteTimeout;
+ (id)defaultConfig;
@end
