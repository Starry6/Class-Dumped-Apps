@interface AVGlobalOperationQueue : NSObject
@property (nonatomic) NSArray unfinishedOperations;
- (void)enqueueOperation:;
- (id)init;
- (void)dealloc;
- (id)unfinishedOperations;
- (id)description;
+ (id)defaultQueue;
@end
