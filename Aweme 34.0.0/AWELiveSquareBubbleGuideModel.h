@interface AWELiveSquareBubbleGuideModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSNumber anchorID;
@property (nonatomic) NSString requestID;
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) NSString actionUrl;
@property (nonatomic) NSString pushType;
@property (nonatomic) NSString issueID;
- (id)anchorID;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (void)setAnchorID:;
- (void)setActionUrl:;
- (id)roomID;
- (id)requestID;
- (void)setPushType:;
- (void)setRequestID:;
- (id)pushType;
- (void).cxx_destruct;
- (id)actionUrl;
- (id)title;
- (void)setRoomID:;
- (void)setTitle:;
- (id)issueID;
- (void)setIssueID:;
@end
