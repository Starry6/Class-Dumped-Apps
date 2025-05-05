@interface CSJAtomicEventListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)finishEventChain:;
- (void)startEventChain:;
- (id)updateContext:action:;
- (id)updateDataSource:action:;
- (void)startEvent:;
@end
