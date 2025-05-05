@interface PLSortedChangedObjects : NSObject
@property (nonatomic) Q count;
@property (nonatomic) ^@ sortedObjectPointers;
@property (nonatomic) NSArray changedObjects;
- (void)dealloc;
- (id)sortedObjectPointers;
- (void).cxx_destruct;
- (id)initWithChangedObjects:;
- (unsigned long long)count;
- (id)changedObjects;
@end
