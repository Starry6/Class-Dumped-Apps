@interface BTDResponderChainEvent : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) @? block;
- (id)initWithEventName:block:;
- (id)block;
- (id)eventName;
- (void).cxx_destruct;
@end
