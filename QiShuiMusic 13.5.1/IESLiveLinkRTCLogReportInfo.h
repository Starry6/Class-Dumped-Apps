@interface IESLiveLinkRTCLogReportInfo : NSObject
@property (nonatomic) NSString sdkVersion;
@property (nonatomic) NSString streamName;
@property (nonatomic) NSString rtcType;
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString projectKey;
@property (nonatomic) NSString rtcRole;
@property (nonatomic) NSString appChannel;
@property (nonatomic) NSString rtcUserID;
- (id)rtcRole;
- (id)appChannel;
- (id)projectKey;
- (id)rtcUserID;
- (void)setAppChannel:;
- (void)setProjectKey:;
- (void)setRtcRole:;
- (void)setRtcUserID:;
- (id)streamName;
- (id)rtcType;
- (id)channelName;
- (void)setStreamName:;
- (void).cxx_destruct;
- (id)sdkVersion;
- (void)setChannelName:;
- (void)setSdkVersion:;
- (void)setRtcType:;
@end
