@interface IESLiveVSMessageBoardApi : HTSLiveApi
- (void)fetchVSMessageBoardDressUpListServiceWithRoomID:episodeID:loginEntityID:UserID:completion:;
- (void)fetchVSMessageBoardInteractThumbupListWithRoomID:episodeID:ownerUserId:userID:completion:;
- (void)fetchVSSelfCommentWithUserID:anchorID:episodeID:roomID:completion:;
- (void)sendVSMessageBoardMessageWithRoomID:episodeID:ownerUserId:userID:content:nickname:entityId:coverID:badgeID:completion:;
@end
