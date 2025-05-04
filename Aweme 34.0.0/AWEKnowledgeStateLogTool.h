@interface AWEKnowledgeStateLogTool : NSObject
+ (void)logInfo:withActionType:sceneInfo:cardInfo:forError:;
+ (void)logMessage:forError:;
+ (id)dicWithoutAwemeModelForStateInfo:;
+ (void)trackErrorMessage:withParam:;
+ (void)trackErrorMessage:withActionType:sceneInfo:cardInfo:param:;
@end
