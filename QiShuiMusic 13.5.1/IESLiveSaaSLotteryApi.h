@interface IESLiveSaaSLotteryApi : HTSLiveApi
- (void)checkLotteryUserRightWithLotteryID:roomID:retry:completion:;
- (void)getLotteryInfoWithRoomID:lotteryID:anchorOpenID:queryFrom:retry:completion:;
@end
