@interface IESLiveDanmakuNodeFactory : NSObject
@property (nonatomic) <IESLiveUserService> userService;
@property (nonatomic) <HTSLiveTemplateProviderAdapter> templateProvider;
@property (nonatomic) <IESLiveDanmakuNodeFactoryDelegate> delegate;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
- (void)setUserService:;
- (id)businessDanmakuNodeFromConfigure:engineSettings:emoticonParser:;
- (void)buildNodeFromMessage:engineSettings:emoticonParser:preferredStrategyClass:;
- (id)carnivalDanmakuNodeFromMessage:settings:emoticonParser:;
- (void)carnivalDanmakuNodeFromMessage:settings:emoticonParser:completion:;
- (void)p_loadImageForCombineText:completion:;
- (void)p_loadImageForText:completion:;
- (void)p_loadImageForURLListArray:completion:;
- (void)resetCarnivalDanmakuNodes:settings:emoticonParser:;
- (id)selectOneInTemplates:;
- (id)selectOneTemplateWithSetting:forMessage:;
- (void)setupStatisticsForNode:;
- (id)strategyWithMessage:engineSettings:preferredStrategyClass:;
- (id)userService;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)templateProvider;
- (void)setTemplateProvider:;
@end
