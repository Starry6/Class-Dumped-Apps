@interface AWEIMMixPhotoShowCameraContext : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString peerUserID;
@property (nonatomic) Q chatType;
@property (nonatomic) q type;
@property (nonatomic) NSDictionary trackExt;
- (id)peerUserID;
- (id)trackExt;
- (unsigned long long)chatType;
- (void)setChatType:;
- (void)setPeerUserID:;
- (void)setTrackExt:;
- (long long)type;
- (id)conversationID;
- (id)description;
- (void)setType:;
- (void).cxx_destruct;
- (void)setConversationID:;
@end
