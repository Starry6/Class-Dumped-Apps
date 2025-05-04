@interface AWEDetailCollectionPerformanceTracker : NSObject
@property (nonatomic) NSMutableDictionary mapTable;
- (id)getTrackModelWithInstance:;
- (void)clearWithInstance:;
- (void)setTrackingPageName:withInstance:;
- (void)eventBegin:withInstance:;
- (void)eventEnd:withInstance:;
- (void)finishWithExtraParam:instance:;
- (id)init;
- (void).cxx_destruct;
- (id)mapTable;
- (void)setMapTable:;
+ (id)sharedTracker;
@end
