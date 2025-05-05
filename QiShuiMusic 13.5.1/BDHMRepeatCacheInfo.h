@interface BDHMRepeatCacheInfo : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary recordDict;
@property (nonatomic) q repeatCount;
- (id)initWithEventName:record:;
- (id)recordDict;
- (void)setRecordDict:;
- (long long)repeatCount;
- (void)setRepeatCount:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
@end
