@interface AVMetadataEnumerator : NSEnumerator
- (id)nextObject;
- (void)dealloc;
- (void)_setKey:;
- (id)initWithMetadataReader:;
- (id)initWithArray:key:keySpace:locale:;
- (id)initWithMetadataReader:array:key:keySpace:locale:;
- (void)_setMetadataReader:;
- (void)_setArrayEnumerator:;
- (void)_setKeySpace:;
- (void)_setLocale:;
+ (id)metadataEnumeratorWithMetadataReader:;
+ (id)metadataEnumeratorWithArray:key:keySpace:locale:;
@end
