@interface KVItemMapper : NSObject
- (id)mapObject:error:;
- (long long)targetItemType;
- (id)init;
- (id)mapObject:additionalFields:error:;
- (void).cxx_destruct;
- (id)initWithObjectClass:error:;
@end
