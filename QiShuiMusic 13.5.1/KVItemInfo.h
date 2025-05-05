@interface KVItemInfo : NSObject
- (id)item;
- (id)init;
- (id)originAppId;
- (unsigned long long)hash;
- (long long)itemType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)itemId;
- (id)priorInfo;
- (id)unindexedFieldsWithType:;
- (id)initWithItem:originAppId:;
- (id)initWithItem:originAppId:priorInfo:;
- (id)unindexedFields;
- (void)setPriorInfo:;
- (BOOL)isEqualToItemInfo:;
@end
