@interface UINibStringIDTable : NSObject
- (void)dealloc;
- (long long)count;
- (id)initWithKeysTransferingOwnership:count:;
- (BOOL)lookupKey:identifier:;
@end
