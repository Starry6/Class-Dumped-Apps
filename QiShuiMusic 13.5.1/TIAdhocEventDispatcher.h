@interface TIAdhocEventDispatcher : NSObject
@property (nonatomic) NSMutableDictionary eventSpecMap;
- (void)setEventSpecMap:;
- (void)dispatchEventForStatisticWithName:andValue:withCompletionHandler:;
- (id)replacePeriodsInString:;
- (void).cxx_destruct;
- (id)loadEventSpecMapFromConfig:;
- (id)eventSpecMap;
- (void)dispatchEventForStatisticWithName:andValue:;
- (id)initFromConfig:;
+ (id)sharedInstance;
@end
