@interface AWEFeedDoubleColumnChunkManager : NSObject
@property (nonatomic) NSMutableSet proxySet;
- (void)removeCurrentProxy:;
- (void)registCurrentProxy:;
- (void)setProxySet:;
- (id)proxySet;
- (id)getChunkRequestManager;
- (void).cxx_destruct;
+ (id)requestAwemeItemsWithURLString:URLParams:bodyParams:pbFinishBlock:receiveDataBlock:chunkFinishBlock:;
+ (BOOL)shouldOptMainThread;
+ (id)requestAwemeItemsWithURLString:URLParams:bodyParams:receiveDataBlock:chunkFinishBlock:;
+ (id)sharedInstance;
@end
