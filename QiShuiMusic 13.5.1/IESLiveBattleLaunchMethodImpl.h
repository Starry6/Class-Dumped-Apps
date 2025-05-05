@interface IESLiveBattleLaunchMethodImpl : IESLiveBattleLaunchMethod
- (void)bizEndWithLynxData:;
- (void)bizInviteWithLynxData:;
- (void)callWithParamModel:completionHandler:;
- (id)handlePlayLaunchEvent:extraParams:;
- (id)invitePlayWithLynxData:;
- (id)openPlayWithLynxData:;
- (id)replyPlayWithLynxData:;
- (id)switchSceneWithLynxData:;
@end
