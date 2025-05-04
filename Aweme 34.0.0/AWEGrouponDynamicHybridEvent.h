@interface AWEGrouponDynamicHybridEvent : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
- (id)initWithEventName:params:;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
- (id)params;
- (void)setParams:;
+ (id)eventWithEventName:params:;
@end
