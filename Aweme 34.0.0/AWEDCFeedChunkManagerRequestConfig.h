@interface AWEDCFeedChunkManagerRequestConfig : NSObject
@property (nonatomic) # proxyClass;
@property (nonatomic) # dataHelperClass;
@property (nonatomic) # requestSerializerClass;
@property (nonatomic) @? preloadImageBlock;
@property (nonatomic) BOOL enableDispatchRequest;
- (void)setRequestSerializerClass:;
- (Class)requestSerializerClass;
- (BOOL)enableDispatchRequest;
- (Class)dataHelperClass;
- (id)preloadImageBlock;
- (void)setDataHelperClass:;
- (void)setPreloadImageBlock:;
- (void)setEnableDispatchRequest:;
- (Class)proxyClass;
- (void).cxx_destruct;
- (void)setProxyClass:;
@end
