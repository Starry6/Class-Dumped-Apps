@interface BWISPStartupAnalyticsPayload : NSObject
@property (nonatomic) NSInteger ispStartupTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setIspStartupTime:;
- (int)ispStartupTime;
- (id)eventName;
- (void)reset;
- (id)eventDictionary;
@end
