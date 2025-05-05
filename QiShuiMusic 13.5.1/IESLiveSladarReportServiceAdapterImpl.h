@interface IESLiveSladarReportServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportALogbyUsersWithFetchStartTime:fetchEndTime:scene:reportALogCallback:;
- (void)trackCurrentThreadLogExceptionType:skippedDepth:customParams:filters:callback:;
- (void)trackUserExceptionWithExceptionType:title:subTitle:customParams:filters:callback:;
- (id)init;
@end
