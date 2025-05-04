@interface AWESearchBaseContainerNetworkConfig : NSObject
@property (nonatomic) q requestDataCount;
@property (nonatomic) BOOL customAnylyseResponse;
@property (nonatomic) BOOL netStepSign;
@property (nonatomic) BOOL needPostMethod;
@property (nonatomic) Q flowRequestType;
@property (nonatomic) NSString searchChannel;
- (id)searchChannel;
- (void)setSearchChannel:;
- (void)setFlowRequestType:;
- (void)setRequestDataCount:;
- (void)setCustomAnylyseResponse:;
- (void)setNetStepSign:;
- (void)setNeedPostMethod:;
- (long long)requestDataCount;
- (BOOL)customAnylyseResponse;
- (BOOL)netStepSign;
- (BOOL)needPostMethod;
- (unsigned long long)flowRequestType;
- (id)init;
- (void).cxx_destruct;
@end
