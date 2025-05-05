@interface IESLiveBackendRequestBaseImpl : NSObject
@property (nonatomic) IESLivePreloadRequestParam preloadParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)backendRequestDidCompleteWithRequest:;
- (void)backendRequestWillRequest;
- (id)bizParams;
- (BOOL)pbParserWithOutBody;
- (id)preloadParam;
- (void)setPreloadParam:;
- (Class)modelClass;
- (void).cxx_destruct;
- (unsigned long long)responseFormat;
+ (BOOL)activeRequestImpl;
+ (id)requstBizPath;
@end
