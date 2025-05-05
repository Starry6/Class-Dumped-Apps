@interface VCNetworkSpeedRecord : NSObject
@property (nonatomic) NSString streamId;
@property (nonatomic) NSInteger trackType;
@property (nonatomic) q bytes;
@property (nonatomic) q time;
@property (nonatomic) q timestamp;
@property (nonatomic) q rtt;
@property (nonatomic) q lastRecvDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)getLastRecvDate;
- (long long)getRtt;
- (id)getStreamId;
- (int)getTrackType;
- (void)setLastRecvDate:;
- (void)setTime:;
- (void)setStreamId:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (long long)getTimestamp;
- (void)setTrackType:;
- (long long)getTime;
- (void)setBytes:;
- (long long)getBytes;
- (void)setRtt:;
@end
