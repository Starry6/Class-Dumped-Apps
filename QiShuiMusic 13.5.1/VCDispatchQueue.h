@interface VCDispatchQueue : NSObject
- (id)init;
- (void)dealloc;
- (id)getCustomRootQueueWithPriority:isFixedPriority:;
+ (id)defaultManager;
@end
