@interface IESLiveRevenueInteractFullLinkMonitor : NSObject
@property (nonatomic) <IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) Q module;
@property (nonatomic) NSString servicePrefixString;
@property (nonatomic) <IESLiveRevenueInteractFullLinkMonitorDelegate> delegate;
- (id)fullLinkMonitor;
- (void)appendResponseDictWith:apiJSONResponse:;
- (void)appendResponseDictWith:apiPBResponse:;
- (id)baseMonitorParams;
- (id)initWithDIContext:;
- (void)monitorBusinessName:extra:;
- (void)monitorMessage:extra:;
- (void)monitorResponse:error:apiRequestTime:path:extra:;
- (void)monitorWithJSON:error:apiRequestTime:path:extra:;
- (void)monitorWithPB:error:apiRequestTime:path:extra:;
- (id)servicePrefixString;
- (void)setFullLinkMonitor:;
- (void)setServicePrefixString:;
- (unsigned long long)module;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setModule:;
@end
