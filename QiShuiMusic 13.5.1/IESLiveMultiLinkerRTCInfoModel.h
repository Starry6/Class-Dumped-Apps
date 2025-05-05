@interface IESLiveMultiLinkerRTCInfoModel : NSObject
@property (nonatomic) BOOL isOwnerLinked;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) NSMutableDictionary rtcLinkerBusinessStatusDict;
@property (nonatomic) q version;
@property (nonatomic) NSString dataSource;
- (void)setRtcLinkerBusinessStatusDict:;
- (BOOL)isOwnerLinked;
- (id)multiChannelInfo;
- (id)rtcLinkerBusinessStatusDict;
- (void)setIsOwnerLinked:;
- (void)setMultiChannelInfo:;
- (void)setDataSource:;
- (void)setVersion:;
- (long long)version;
- (id)logString;
- (id)dataSource;
- (void).cxx_destruct;
@end
