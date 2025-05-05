@interface CSRequestQueue : NSObject
- (void)sync:;
- (void)validate;
- (void)enqueue:;
- (void)handleEvent;
- (void)suspend;
- (id)label;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithLabel:target:startBlock:;
- (void)async:;
+ (id)_requestQueueAttribute;
@end
