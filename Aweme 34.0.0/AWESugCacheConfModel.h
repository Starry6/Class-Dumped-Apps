@interface AWESugCacheConfModel : AWEBaseApiModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSInteger maxCount;
@property (nonatomic) Q endTime;
@property (nonatomic) BOOL currentSession;
@property (nonatomic) NSString sessionId;
@property (nonatomic) Q tabType;
- (unsigned long long)tabType;
- (void)setTabType:;
- (BOOL)isValidNow;
- (void)setMaxCount:;
- (BOOL)currentSession;
- (BOOL)enable;
- (void)setSessionId:;
- (id)sessionId;
- (id)init;
- (int)maxCount;
- (unsigned long long)endTime;
- (void)setEndTime:;
- (void)setCurrentSession:;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
