@interface IESLivePublicScreenAPIImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchNextLoadmoreMessagesWithRoomID:cursor:count:completion:;
- (void)getMessageOperateStatusWithMsgID:completion:;
- (void)getReplyTreeListWithRoomID:messageID:replyID:guide:count:completion:;
- (void)reportMessageFeaturedAreaStatus:;
- (void)reportRoomEventWithEventReportModel:;
- (void)updateMessageOperateStatusWithMsgID:actionType:completion:;
@end
