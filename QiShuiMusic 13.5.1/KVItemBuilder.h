@interface KVItemBuilder : NSObject
- (void)_reset;
- (id)init;
- (id)addFieldWithType:label:value:error:;
- (id)addFieldWithType:localeType:label:value:error:;
- (id)buildItemWithError:;
- (id)buildBufferWithError:;
- (id)_addFieldWithType:localeType:label:value:error:;
- (void).cxx_destruct;
- (id)addFieldWithType:value:error:;
- (id)setItemType:itemId:error:;
- (id)addFieldWithType:localeType:value:error:;
- (id).cxx_construct;
+ (id)buildFieldWithType:label:value:error:;
@end
