@interface AWEIMMixPhotoStartOrJoinSuccessInfo : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSInteger currentJoinCount;
@property (nonatomic) q playID;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString clientMessageID;
@property (nonatomic) NSDictionary rspTrackExt;
@property (nonatomic) NSString taskID;
- (void)setClientMessageID:;
- (id)clientMessageID;
- (long long)playID;
- (id)rspTrackExt;
- (int)currentJoinCount;
- (void)setPlayID:;
- (void)setCurrentJoinCount:;
- (void)setRspTrackExt:;
- (long long)type;
- (id)conversationID;
- (void)setType:;
- (void).cxx_destruct;
- (void)setTaskID:;
- (id)taskID;
- (void)setConversationID:;
@end
