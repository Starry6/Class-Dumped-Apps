@interface UIRuntimeEventConnection : UIRuntimeConnection
@property (nonatomic) Q eventMask;
@property (nonatomic) : action;
@property (nonatomic) @ target;
- (unsigned long long)eventMask;
- (SEL)action;
- (id)initWithCoder:;
- (void)setEventMask:;
- (void)encodeWithCoder:;
- (void)connect;
- (id)target;
- (id)description;
- (void)connectForSimulator;
@end
