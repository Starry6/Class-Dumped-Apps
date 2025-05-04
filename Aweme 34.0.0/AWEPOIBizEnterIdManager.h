@interface AWEPOIBizEnterIdManager : NSObject
@property (nonatomic) NSMutableDictionary pageEnterIdCacheDict;
- (id)createBcmChainEnterIdWithIsPrefix:preEnterId:;
- (id)getTargetParamKeyWithPageBtm:;
- (void)setBcmChainEnterIdWithHost:preEnterId:;
- (void)setBcmChainExitIdWithHost:;
- (void)frozenEnterIdCacheWithBtm:;
- (void)resetFrozenEnterIdCacheWithBtm:;
- (id)getValidBTMResponder:;
- (id)getEnterIdWithBcmItem:;
- (id)pageEnterIdCacheDict;
- (id)getBcmChainWithMaxChainLength:;
- (id)getbtmsWithBcmChain:;
- (id)getEnterIdsWithBcmChain:;
- (id)getAllEnterId;
- (void)setEnterIdCacheWithBtm:targetParamKey:;
- (void)markEnterIdCacheWithBtm:;
- (void)setPageEnterIdCacheDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
