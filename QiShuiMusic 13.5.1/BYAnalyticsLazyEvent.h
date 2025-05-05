@interface BYAnalyticsLazyEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? payloadBlock;
@property (nonatomic) BOOL persist;
- (BOOL)persist;
- (void)setName:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)payloadBlock;
- (void)setPayloadBlock:;
- (void)setPersist:;
+ (id)eventWithName:withPayloadBlock:persist:;
@end
