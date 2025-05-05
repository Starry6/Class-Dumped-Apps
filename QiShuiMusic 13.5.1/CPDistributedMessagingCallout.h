@interface CPDistributedMessagingCallout : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) BOOL returnsVoid;
- (SEL)selector;
- (void)dealloc;
- (id)target;
- (BOOL)returnsVoid;
- (id)initWithTarget:selector:;
@end
