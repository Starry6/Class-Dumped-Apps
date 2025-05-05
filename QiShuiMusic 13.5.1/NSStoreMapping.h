@interface NSStoreMapping : NSObject
- (id)initWithExternalName:;
- (id)externalName;
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
@end
