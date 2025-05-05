@interface IESLiveLinkRTCInteractRemoteStreamKey : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) NSString roomId;
@property (nonatomic) q streamIndex;
- (id)initWithUid:withRid:withIndex:;
- (id)roomId;
- (void)setRoomId:;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
- (long long)streamIndex;
- (void)setStreamIndex:;
@end
