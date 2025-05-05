@interface IESECContextEventSubscriber : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) @? callback;
@property (nonatomic) IESECContext targetContext;
- (void)attachToTarget:;
- (id)callback;
- (void)setCallback:;
- (void)dealloc;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (BOOL)unsubscribe;
- (id)targetContext;
- (void)setTargetContext:;
@end
