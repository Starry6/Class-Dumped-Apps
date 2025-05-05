@interface IESLiveAssignmentSubscriber : NSObject
@property (nonatomic) @ target;
@property (nonatomic) NSString keyPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)receiveDisposal;
- (void)receiveValue:;
- (void)receiveSubscription:;
- (void)setObject:forKeyedSubscript:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)target;
- (id)initWithTarget:keyPath:;
@end
