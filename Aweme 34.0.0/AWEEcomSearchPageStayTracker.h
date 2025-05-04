@interface AWEEcomSearchPageStayTracker : NSObject
@property (nonatomic) NSMutableDictionary eventDict;
- (id)eventDict;
- (void)setEventDict:;
- (id)getPageEventWithUniqueId:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedTracker;
@end
