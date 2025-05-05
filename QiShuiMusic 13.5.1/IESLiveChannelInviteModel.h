@interface IESLiveChannelInviteModel : NSObject
@property (nonatomic) NSNumber roomChannelInviteID;
@property (nonatomic) NSNumber currentChannelInviteID;
@property (nonatomic) NSString shareText;
- (id)currentChannelInviteID;
- (id)roomChannelInviteID;
- (void)setCurrentChannelInviteID:;
- (void)setRoomChannelInviteID:;
- (id)shareText;
- (void).cxx_destruct;
- (void)setShareText:;
@end
