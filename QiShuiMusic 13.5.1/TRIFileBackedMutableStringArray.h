@interface TRIFileBackedMutableStringArray : NSObject
@property (nonatomic) Q count;
- (id)init;
- (void)dealloc;
- (BOOL)addString:;
- (unsigned long long)count;
- (BOOL)enumerateStringsWithBlock:;
@end
