@interface IESLiveSaaSBroadcastFusionApi : HTSLiveApi
- (void)getFusionPreCreate:completion:;
- (void)getFusionPrecondition:isBindDouyin:scene:completion:;
+ (id)getFusionSceneString:;
@end
