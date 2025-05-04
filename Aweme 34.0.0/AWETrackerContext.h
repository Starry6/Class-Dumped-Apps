@interface AWETrackerContext : NSObject
@property (nonatomic) NSDictionary log;
- (void)addLog:;
- (void)search_addLogWithBuilder:;
- (void)search_addExclusiveLogWithBuilder:;
- (void)addExclusiveLog:;
- (id)search_exportLogWithBuilder:;
- (id)init;
- (void)dealloc;
- (void)setLog:;
- (id)log;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
