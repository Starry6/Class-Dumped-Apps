@interface BDTrackerEventListConfig : NSObject
@property (nonatomic) NSMutableDictionary filters;
- (id)filterTrackWithEvent:isV1:;
- (void)updateEventList:forKey:;
- (id)filters;
- (id)init;
- (void)setFilters:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
