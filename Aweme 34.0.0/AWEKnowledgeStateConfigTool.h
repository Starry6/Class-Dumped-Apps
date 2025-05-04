@interface AWEKnowledgeStateConfigTool : NSObject
+ (id)actionConditionModelsForActionType:atScene:;
+ (id)resultModelForHandlerType:atScene:;
+ (id)createConfigForSceneType:;
+ (id)valueForKey:atDictionary:;
+ (id)syncModelForToScene:fromScene:isPush:;
+ (void)syncProvider:withAllInfo:ruleDic:;
+ (Class)handlerForClassType:;
+ (BOOL)updateStateInfoForNewScene:;
+ (BOOL)syncStateForToScene:fromScene:isPush:;
+ (Class)handlerForActionType:atScene:;
@end
