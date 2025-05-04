@interface AWELuckySDKVideoCloudService : NSObject
@property (nonatomic) BDVideoUploaderClient uploaderClient;
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString traceId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoUpload:didFinish:error:;
- (void)videoUpload:progressDidUpdate:;
- (long long)videoUploadGetNetState:;
- (void)setTraceId:;
- (id)initWithParamModel:;
- (id)uploaderClient;
- (void)setContainer:;
- (id)container;
- (void)dealloc;
- (id)traceId;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)setCompletionHandler:;
@end
