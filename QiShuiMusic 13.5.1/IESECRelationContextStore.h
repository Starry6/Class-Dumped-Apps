@interface IESECRelationContextStore : IESECContext
@property (nonatomic) NSMutableDictionary itemDicts;
@property (nonatomic) NSMutableDictionary itemDicts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contextItemForKey:;
- (id)itemDicts;
- (void)setItemDicts:;
- (void)setObject:forKey:expiredTime:;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
@end
