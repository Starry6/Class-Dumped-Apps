@interface IESLiveInternalRouterAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pushUserProfileWithParamsModel:;
- (BOOL)enableAnchorLynxProfile:;
- (void)enterDouyinOpenUserProfileWithParamsModel:;
- (void)p_enterAnchorProfileWithParamsModel:;
- (void)p_enterProfileWithParamsModel:;
- (id)requestIDFromLogPb:;
- (BOOL)shouldUseXiguaHostProfile:;
@end
