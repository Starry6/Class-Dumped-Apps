@interface AWEIMMessageConversationInitOptions : NSObject
@property (nonatomic) NSString peerSecUserID;
@property (nonatomic) BOOL isAuthorService;
@property (nonatomic) BOOL shouldShowEngageGroupOwnerLocalGIF;
- (BOOL)isAuthorService;
- (id)peerSecUserID;
- (void)setIsAuthorService:;
- (void)setPeerSecUserID:;
- (void)setShouldShowEngageGroupOwnerLocalGIF:;
- (BOOL)shouldShowEngageGroupOwnerLocalGIF;
- (void).cxx_destruct;
@end
