@interface BDARVAdModelManager : NSObject
@property (nonatomic) NSMutableDictionary allModel;
@property (nonatomic) NSMutableDictionary allCacheByCreatorId;
@property (nonatomic) NSMutableDictionary allCache;
- (id)allCache;
- (id)allCacheByCreatorId;
- (id)allModel;
- (void)clearCacheWithKey:;
- (long long)getAdCacheCount:key:needSecondaryPartition:;
- (id)getAdModelFromModelArray:;
- (id)getItem:key:;
- (id)getItem:key:needSecondaryPartition:;
- (id)loadAdModelWithoutSecondaryPartition:;
- (void)setAllCache:;
- (void)setAllCacheByCreatorId:;
- (void)setAllModel:;
- (void)setAllTypeItems:key:enableExpire:needSecondaryPartition:;
- (void).cxx_destruct;
+ (id)shareManager;
@end
