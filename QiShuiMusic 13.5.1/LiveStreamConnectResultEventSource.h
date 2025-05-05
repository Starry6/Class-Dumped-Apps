@interface LiveStreamConnectResultEventSource : NSObject
@property (nonatomic) q scene;
@property (nonatomic) q rtmpCode1;
@property (nonatomic) q rtmpCode2;
@property (nonatomic) q rtmpCode3;
@property (nonatomic) NSString rtmpMsg;
@property (nonatomic) NSString extra;
- (id)rtmpMsg;
- (long long)rtmpCode1;
- (long long)rtmpCode2;
- (long long)rtmpCode3;
- (void)setExtra:;
- (void)setRtmpCode1:;
- (void)setRtmpCode2:;
- (void)setRtmpCode3:;
- (void)setRtmpMsg:;
- (id)extra;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
+ (id)sourceWithRtmpCode1:code2:code3:msg:;
@end
