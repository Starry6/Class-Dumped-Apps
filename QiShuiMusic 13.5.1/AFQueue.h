@interface AFQueue : NSObject
@property (nonatomic) @ frontObject;
@property (nonatomic) Q count;
@property (nonatomic) <AFQueueDelegate> delegate;
- (void)enqueueObjects:;
- (void)dealloc;
- (void)enqueueObject:;
- (void)setDelegate:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)dequeueObject;
- (id)delegate;
- (id)dequeueAllObjects;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (id)description;
- (id)_objects;
- (unsigned long long)count;
- (id)frontObject;
@end
