@interface IESECMallClientAiPerfModel : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) Q status;
@property (nonatomic) double tAppLaunchTime;
@property (nonatomic) double tRegisterPitayaReady;
@property (nonatomic) double tPitayaReadyCompletion;
@property (nonatomic) double tPitayaMessageCompletion;
- (void)setTAppLaunchTime:;
- (void)setTPitayaMessageCompletion:;
- (void)setTPitayaReadyCompletion:;
- (void)setTRegisterPitayaReady:;
- (double)tAppLaunchTime;
- (double)tPitayaMessageCompletion;
- (double)tPitayaReadyCompletion;
- (double)tRegisterPitayaReady;
- (id)toParamsDictionary;
- (void)setStatus:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (unsigned long long)status;
@end
