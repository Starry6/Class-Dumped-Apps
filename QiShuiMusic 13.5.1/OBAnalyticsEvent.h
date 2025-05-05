@interface OBAnalyticsEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (void)setName:;
- (void)setPayload:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
+ (id)eventWithName:withPayload:;
@end
