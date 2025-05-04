@interface AWEIMChatMemoryMonitor : HTSService
@property (nonatomic) NSString currentEvent;
@property (nonatomic) q currentMemorySize;
@property (nonatomic) NSDictionary eventMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackWithParams:;
- (void)recordMemoryForEvent:;
- (void)setCurrentMemorySize:;
- (void)setEventMap:;
- (long long)currentMemorySize;
- (BOOL)enableReportForEvent:;
- (id)eventMap;
- (id)currentEvent;
- (void).cxx_destruct;
- (void)setCurrentEvent:;
+ (id)sharedInstance;
@end
