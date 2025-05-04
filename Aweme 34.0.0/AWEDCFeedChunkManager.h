@interface AWEDCFeedChunkManager : NSObject
@property (nonatomic) NSMutableSet proxySet;
- (void)removeCurrentProxy:;
- (id)getChunkRequestManagerWithConfig:;
- (void)registCurrentProxy:;
- (void)setProxySet:;
- (id)proxySet;
- (void).cxx_destruct;
+ (void)handleTidyModelIfNeededWithResponse:fullModelSet:tidyModelDict:URLParams:bodyParams:config:;
+ (BOOL)disableMerge;
+ (id)requestPbAwemeItemsWithURLString:URLParams:bodyParams:header:isPost:pbFinishBlock:receiveDataBlock:chunkFinishBlock:managerConfig:;
+ (id)requestAwemeItemsWithURLString:URLParams:bodyParams:header:isPost:receiveDataBlock:chunkFinishBlock:managerConfig:;
+ (id)sharedInstance;
@end
