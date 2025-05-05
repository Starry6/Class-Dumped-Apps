@interface APBEvent : NSObject
@property (nonatomic) q eventType;
@property (nonatomic) NSDictionary params;
- (id)initWithEventType:withParam:;
- (long long)eventType;
- (void)setEventType:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)eventWithCommand:;
@end
