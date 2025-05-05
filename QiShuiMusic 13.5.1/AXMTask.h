@interface AXMTask : NSObject
@property (nonatomic) BOOL complete;
@property (nonatomic) @? taskCompleteBlock;
- (BOOL)isComplete;
- (void).cxx_destruct;
- (void)setComplete:;
- (void)markAsComplete:;
- (id)taskCompleteBlock;
- (void)setTaskCompleteBlock:;
@end
