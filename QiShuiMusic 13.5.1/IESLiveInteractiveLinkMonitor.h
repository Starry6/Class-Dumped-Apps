@interface IESLiveInteractiveLinkMonitor : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) <IESLiveFullLinkMonitor> fullLinkMonitor;
- (id)fullLinkMonitor;
- (void)appendResponseDictWith:apiJSONResponse:;
- (void)appendResponseDictWith:apiPBResponse:;
- (id)initWithDIContext:scene:;
- (void)monitorAPI:error:apiRequestTime:path:extra:;
- (void)monitorLinkMessage:extra:;
- (void)monitorWithJSON:error:apiRequestTime:path:extra:;
- (void)monitorWithPB:error:apiRequestTime:path:extra:;
- (unsigned long long)p_moduleForScene;
- (void)setFullLinkMonitor:;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
@end
