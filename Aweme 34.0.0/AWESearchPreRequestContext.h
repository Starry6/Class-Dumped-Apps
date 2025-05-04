@interface AWESearchPreRequestContext : NSObject
@property (nonatomic) AWESearchPreNetworkRequestParamsObject preNetworkRequestParamsObject;
@property (nonatomic) AWESearchPreRequestManagerParamsObject preRequestManagerParamsObject;
@property (nonatomic) AWESearchPreRequestParamsContextParamsObject requestParamsContextParamsObject;
- (id)preRequestManagerParamsObject;
- (id)requestParamsContextParamsObject;
- (id)preNetworkRequestParamsObject;
- (void)setPreRequestManagerParamsObject:;
- (void)setRequestParamsContextParamsObject:;
- (void)setPreNetworkRequestParamsObject:;
- (void).cxx_destruct;
@end
