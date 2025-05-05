@interface BDXLynxAirEventParam : NSObject
@property (nonatomic) LynxView lynxView;
@property (nonatomic) Q eventType;
@property (nonatomic) NSString eventName;
@property (nonatomic) q targetSign;
- (id)lynxView;
- (void)setLynxView:;
- (void)setTargetSign:;
- (long long)targetSign;
- (unsigned long long)eventType;
- (void)setEventType:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
@end
