@interface AWEGCPFlowMonitorServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizParamsDic:;
- (id)getDouyinFlowAuthTokenWithBizParamModel:;
- (void)removeDouyinFlowAuthToken:;
+ (id)sharedInstance;
@end
