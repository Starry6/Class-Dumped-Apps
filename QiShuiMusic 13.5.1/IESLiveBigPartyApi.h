@interface IESLiveBigPartyApi : HTSLiveApi
- (void)finishBigPartyGameWithRoomID:reason:callback:;
- (void)openBigPartyGameWithRoomID:duration:callback:;
@end
