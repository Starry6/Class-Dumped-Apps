@interface AWEIMMixPhotoTimeDurationTrackContext : NSObject
@property (nonatomic) double clientReqTime;
@property (nonatomic) double serverReceiveReqTime;
@property (nonatomic) double serverReqUpdateMsgTime;
@property (nonatomic) double clientReceiveMsgUpdatedTime;
@property (nonatomic) NSString action;
@property (nonatomic) BOOL isTimeOut;
- (void)setIsTimeOut:;
- (BOOL)isTimeOut;
- (void)setClientReceiveMsgUpdatedTime:;
- (double)clientReceiveMsgUpdatedTime;
- (void)setClientReqTime:;
- (void)setServerReceiveReqTime:;
- (void)setServerReqUpdateMsgTime:;
- (double)clientReqTime;
- (double)serverReceiveReqTime;
- (double)serverReqUpdateMsgTime;
- (void)setAction:;
- (id)action;
- (void).cxx_destruct;
@end
