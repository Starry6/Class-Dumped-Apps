@interface AWEIMMixPhotoMessageUpdatedModel : NSObject
@property (nonatomic) NSString clientMessageID;
@property (nonatomic) q type;
@property (nonatomic) q participateCount;
@property (nonatomic) double clientReceiveMsgUpdatedTime;
@property (nonatomic) BOOL isMixPhotoComplete;
- (void)setClientMessageID:;
- (id)clientMessageID;
- (long long)participateCount;
- (void)setParticipateCount:;
- (void)setClientReceiveMsgUpdatedTime:;
- (void)setIsMixPhotoComplete:;
- (double)clientReceiveMsgUpdatedTime;
- (BOOL)isMixPhotoComplete;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
@end
