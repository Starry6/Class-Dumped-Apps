@interface BYAnalyticsEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) BOOL persist;
- (BOOL)persist;
- (id)payload;
- (void)setName:;
- (void)setPayload:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setPersist:;
+ (id)eventWithName:withPayload:persist:;
@end
