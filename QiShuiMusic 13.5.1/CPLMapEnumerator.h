@interface CPLMapEnumerator : NSObject
@property (nonatomic) @? mapBlock;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void).cxx_destruct;
- (id)initWithEnumerator:;
- (id)initWithEnumerator:map:;
- (id)mapBlock;
@end
