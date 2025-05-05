@interface TMDataStore : NSObject
@property (nonatomic) NSMutableArray trackEvents;
- (void)setTrackEvents:;
- (void)storeEventName:params:;
- (id)trackEvents;
- (void)uploadEvents;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
