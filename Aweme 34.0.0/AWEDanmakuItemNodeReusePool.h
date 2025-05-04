@interface AWEDanmakuItemNodeReusePool : NSObject
@property (nonatomic) Q capacity;
@property (nonatomic) NSMutableDictionary itemTypeToClassMap;
@property (nonatomic) NSMutableDictionary itemTypeToCacheSetMap;
- (id)itemTypeToCacheSetMap;
- (id)itemTypeToClassMap;
- (void)enqueueItemInfo:forType:;
- (id)dequeueItemInfoWithType:;
- (void)registerClass:forItemType:;
- (void)setItemTypeToClassMap:;
- (void)setItemTypeToCacheSetMap:;
- (id)initWithCapacity:;
- (void)setCapacity:;
- (unsigned long long)capacity;
- (void).cxx_destruct;
@end
