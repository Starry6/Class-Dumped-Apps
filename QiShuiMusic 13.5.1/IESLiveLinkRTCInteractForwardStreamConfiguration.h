@interface IESLiveLinkRTCInteractForwardStreamConfiguration : NSObject
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString token;
@property (nonatomic) NSString rtcExtInfo;
- (id)roomId;
- (id)rtcExtInfo;
- (void)setRoomId:;
- (void)setRtcExtInfo:;
- (id)init;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
@end
