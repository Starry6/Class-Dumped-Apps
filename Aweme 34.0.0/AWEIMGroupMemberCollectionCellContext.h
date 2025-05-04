@interface AWEIMGroupMemberCollectionCellContext : NSObject
@property (nonatomic) q type;
@property (nonatomic) IESIMConversationParticipantModel groupMemberModel;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL shouldAddShareOptInfo;
@property (nonatomic) q style;
@property (nonatomic) double avatarWidth;
- (id)initWithType:groupMemberModel:active:shouldAddShareOptInfo:;
- (id)groupMemberModel;
- (BOOL)shouldAddShareOptInfo;
- (long long)type;
- (long long)style;
- (BOOL)active;
- (void).cxx_destruct;
- (void)setStyle:;
- (void)setAvatarWidth:;
- (double)avatarWidth;
@end
