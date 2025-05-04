@interface AWEPOIBizCodeFallbackUtil : NSObject
@property (nonatomic) NSMutableArray callbacks;
@property (nonatomic) AWENetworkRequest request;
- (void)executeAllCallbacksWithNewRouterParams:;
- (void)didEndRequest;
- (void)fetchBizCodeWithRouterParams:completion:;
- (id)callbacks;
- (void)setCallbacks:;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)request;
+ (BOOL)bizCodeFallbackEnable;
+ (BOOL)canFetchBizCode:;
+ (void)trackFetchBizCode:success:;
+ (id)sharedInstance;
@end
