@interface AWETrackerParamsCheckConfig : NSObject
@property (nonatomic) NSMutableDictionary eventToCheckItem;
@property (nonatomic) NSMutableDictionary eventToCheckParams;
- (void)addItemsFrom:;
- (id)eventToCheckItem;
- (void)addItem:forEvent:;
- (BOOL)replacementCheckEvent:withOriginParams:newParams:extraInfo:;
- (void)setEventToCheckItem:;
- (id)eventToCheckParams;
- (void)setEventToCheckParams:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
+ (void)strategyWhenReplacementCheckEventWithError:errorType:applyObject:;
+ (id)sharedInstance;
@end
