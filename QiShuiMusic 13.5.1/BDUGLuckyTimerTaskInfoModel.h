@interface BDUGLuckyTimerTaskInfoModel : BDUGLuckyJSONModel
@property (nonatomic) NSString timerTaskKey;
@property (nonatomic) BOOL expireState;
@property (nonatomic) BDUGLuckyTimerConfig timerConfig;
@property (nonatomic) BDUGLuckyTimerPendentConfig pendantConfig;
@property (nonatomic) NSString extra;
@property (nonatomic) NSDictionary clientExtra;
@property (nonatomic) NSString taskTag;
@property (nonatomic) NSString token;
- (void)setClientExtra:;
- (void)setTimerConfig:;
- (id)clientExtra;
- (id)pendantConfig;
- (void)setExtra:;
- (void)setPendantConfig:;
- (void)setTaskTag:;
- (void)setTimerTaskKey:;
- (id)timerConfig;
- (id)timerTaskKey;
- (id)extra;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (id)taskTag;
- (BOOL)expireState;
- (void)setExpireState:;
@end
