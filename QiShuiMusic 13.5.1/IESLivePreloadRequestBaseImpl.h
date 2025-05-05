@interface IESLivePreloadRequestBaseImpl : NSObject
@property (nonatomic) IESLivePreloadRequestParam preloadParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramDictionary;
- (BOOL)canRequestInStage:;
- (id)customRequest;
- (BOOL)forbidCurrentOnceRequest;
- (id)headerDictionary;
- (void)preloadBindService;
- (id)preloadParam;
- (void)preloadRequestDidCompleteWithRequest:;
- (unsigned long long)preloadRequestMethod;
- (void)preloadRequestWillRequest;
- (void)setPreloadParam:;
- (void)updatePreloadRequestParam:;
- (Class)modelClass;
- (void).cxx_destruct;
- (id)urlPath;
- (unsigned long long)responseFormat;
+ (unsigned long long)requestBusinessIdentifier;
@end
