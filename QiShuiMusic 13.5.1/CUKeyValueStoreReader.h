@interface CUKeyValueStoreReader : NSObject
- (BOOL)valueExistsForKey:;
- (id)init;
- (void)dealloc;
- (id)valueForKey:error:;
- (BOOL)openAtPath:error:;
- (void)close;
- (id)valueForKey:valueType:error:;
- (BOOL)enumerateValuesForKey:error:handler:;
- (id)initWithKeyType:valueType:;
- (BOOL)enumerateValuesForKey:valueType:error:handler:;
- (BOOL)enumerateKeysAndValuesAndReturnError:handler:;
- (id)_readObjectAtOffset:length:type:error:;
- (BOOL)enumerateKeyType:valueType:error:handler:;
@end
