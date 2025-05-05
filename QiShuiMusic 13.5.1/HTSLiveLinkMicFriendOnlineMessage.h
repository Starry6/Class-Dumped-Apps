@interface HTSLiveLinkMicFriendOnlineMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser friend_p;
@property (nonatomic) BOOL hasFriend_p;
@property (nonatomic) BOOL inRoom;
+ (id)descriptor;
@end
