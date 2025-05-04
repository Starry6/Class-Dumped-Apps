@interface AWEIMMessageConversationInitOptions : NSObject
@property (nonatomic) <IESIMConversationProtocol> con;
@property (nonatomic) BOOL isFromMessageBaseViewController;
@property (nonatomic) NSString peerSecUserID;
@property (nonatomic) BOOL isAuthorService;
@property (nonatomic) BOOL shouldShowEngageGroupOwnerLocalGIF;
@property (nonatomic) BOOL showedActiveGroupMembers;
@property (nonatomic) Q participantInitType;
- (id)con;
- (void)setCon:;
- (id)peerSecUserID;
- (void)setParticipantInitType:;
- (BOOL)isAuthorService;
- (void)setIsFromMessageBaseViewController:;
- (void)setPeerSecUserID:;
- (void)setIsAuthorService:;
- (void)setShouldShowEngageGroupOwnerLocalGIF:;
- (void)setShowedActiveGroupMembers:;
- (unsigned long long)participantInitType;
- (BOOL)shouldShowEngageGroupOwnerLocalGIF;
- (BOOL)showedActiveGroupMembers;
- (BOOL)isFromMessageBaseViewController;
- (void).cxx_destruct;
@end
