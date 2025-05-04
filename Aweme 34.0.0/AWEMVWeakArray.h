@interface AWEMVWeakArray : NSObject
@property (nonatomic) NSPointerArray internalArray;
- (void)setInternalArray:;
- (id)internalArray;
- (id)init;
- (void).cxx_destruct;
- (void)addObject:;
- (id)allObjects;
@end
