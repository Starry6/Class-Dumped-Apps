@interface IESLiveNotifyEffectMessageScene : NSObject
@property (nonatomic) NSString sceneName;
@property (nonatomic) NSString subSceneName;
@property (nonatomic) NSString mixUserID;
@property (nonatomic) BOOL needAggregate;
@property (nonatomic) NSNumber aggregatedNum;
@property (nonatomic) HTSLiveText aggregatedText;
- (id)aggregatedNum;
- (id)aggregatedText;
- (id)mixUserID;
- (BOOL)needAggregate;
- (void)setAggregatedNum:;
- (void)setAggregatedText:;
- (void)setMixUserID:;
- (void)setNeedAggregate:;
- (void)setSubSceneName:;
- (id)subSceneName;
- (void).cxx_destruct;
- (id)sceneName;
- (void)setSceneName:;
@end
