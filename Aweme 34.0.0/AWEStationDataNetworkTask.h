@interface AWEStationDataNetworkTask : NSObject
@property (nonatomic) q count;
@property (nonatomic) q retryTime;
@property (nonatomic) NSString ironManId;
@property (nonatomic) BOOL isOnAir;
@property (nonatomic) BOOL isCancel;
- (void)setIronManId:;
- (BOOL)isOnAir;
- (void)setIsOnAir:;
- (id)ironManId;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (BOOL)isCancel;
- (void)setIsCancel:;
- (long long)retryTime;
- (void)setRetryTime:;
@end
