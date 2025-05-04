@interface AWEIMFileMessageService : HTSService
@property (nonatomic) YYMemoryCache metaInfoCache;
@property (nonatomic) NSDictionary cacheStrategy;
@property (nonatomic) <AWEIMFileMessageGlobalConfig> globalConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)globalConfig;
- (void)setGlobalConfig:;
- (id)metaInfoCache;
- (id)p_cacheKeyForCid:msgID:uri:;
- (void)previewFileMessage:convShortID:;
- (BOOL)shouldDegradeFileMsgInConv:;
- (void)cacheFileMetaInfo:convShortID:msgID:uri:;
- (id)readFileMetaInfoWithConvShortID:msgID:uri:;
- (void)setMetaInfoCache:;
- (id)init;
- (void).cxx_destruct;
- (id)cacheStrategy;
- (void)setCacheStrategy:;
@end
