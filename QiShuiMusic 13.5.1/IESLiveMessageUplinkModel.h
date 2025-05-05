@interface IESLiveMessageUplinkModel : NSObject
@property (nonatomic) HTSLiveUplinkPacket reqPacket;
@property (nonatomic) @? completion;
@property (nonatomic) q routeServiceId;
@property (nonatomic) double timeout;
@property (nonatomic) double createTime;
- (BOOL)isTimeoutRequest;
- (id)reqPacket;
- (long long)routeServiceId;
- (void)setReqPacket:;
- (void)setRouteServiceId:;
- (id)completion;
- (void)setCompletion:;
- (id)init;
- (double)createTime;
- (void)setTimeout:;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (double)timeout;
@end
