@interface PLCoreAnalyticsEvent : NSObject
@property (nonatomic) NSDictionary payload;
- (void)publish;
- (id)payload;
- (void)removeKey:;
- (void).cxx_destruct;
- (id)description;
- (void)mergePayload:;
- (id)initWithEvent:payload:;
- (void)addKey:value:;
@end
