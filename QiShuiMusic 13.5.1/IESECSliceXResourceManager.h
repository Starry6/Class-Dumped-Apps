@interface IESECSliceXResourceManager : NSObject
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) IESECSliceXInnerTracker tracker;
@property (nonatomic) IESForestKit forestInstance;
@property (nonatomic) IESECSliceXResourceForestInterceptor interceptor;
- (void)fetchWithURL:extraLog:complete:;
- (void)setInterceptor:;
- (void)debug_interface_preproccessRequestParams:;
- (id)fetchSliceXElementWithURL:sliceXInstance:resourceMetaData:;
- (void)fetchSliceXElementWithURL:sliceXInstance:resourceMetaData:complete:;
- (id)fetchWithURL:extraLog:;
- (id)forestInstance;
- (id)getGeckoErrorMsgWithRequest:error:;
- (id)init_private;
- (id)interceptor;
- (BOOL)isLocalResourceExistForURLString:error:;
- (void)preloadSliceXResourceWithPreloadList:sliceXInstance:;
- (void)registerForestFetcherSequenceWithChannel:defaultFetcherSequence:fileSpecificFetcherSequence:;
- (void)setForestInstance:;
- (void)trackEvent:params:;
- (void)setTracker:;
- (id)tracker;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
+ (id)geckoAccessKey;
+ (id)allocWithZone:;
+ (id)shared;
@end
