@interface AWEComponentsPriorityUtils : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)priorityTypeWithAwemeModel:sceneType:extraInfo:;
+ (void)registerPriorityConfig:;
+ (id)priorityTypeWithAwemeModel:sceneType:;
+ (id)priorityTypeWithAwemeModel:sceneType:extraInfo:useTemplateAnchor:;
+ (BOOL)isHigherPriorityForComponent:toComponent:;
+ (id)registerConfigs;
+ (void)runOnceForLazyRegister;
+ (id)anchorPriorityList;
@end
