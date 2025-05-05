@interface GEOPrioritizedTileKeys : NSObject
@property (nonatomic) I highestPriority;
@property (nonatomic) Q count;
- (id)init;
- (void)dealloc;
- (void)removeKey:;
- (void)setPriority:forKey:;
- (BOOL)popHighestPriorityKey:priority:;
- (id)initWithKeys:priorities:;
- (unsigned int)highestPriority;
- (unsigned long long)count;
@end
