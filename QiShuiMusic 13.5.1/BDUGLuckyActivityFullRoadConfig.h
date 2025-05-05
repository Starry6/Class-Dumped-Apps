@interface BDUGLuckyActivityFullRoadConfig : BDUGLuckyJSONModel
@property (nonatomic) BOOL isEnable;
@property (nonatomic) NSArray globalTaskIdList;
@property (nonatomic) NSArray<BDUGLuckyActivityEventConfig> eventConfig;
@property (nonatomic) BOOL canUseHostHook;
- (void)setEventConfig:;
- (BOOL)canUseHostHook;
- (id)eventConfig;
- (id)globalTaskIdList;
- (BOOL)isEnable;
- (void)setCanUseHostHook:;
- (void)setGlobalTaskIdList:;
- (void)setIsEnable:;
- (void).cxx_destruct;
@end
