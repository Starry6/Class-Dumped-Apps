@interface SFAnalyticsEvent : NSObject
@property (nonatomic) NSDictionary record;
@property (nonatomic) NSNumber timestamp;
- (id)record;
- (void).cxx_destruct;
- (id)timestamp;
- (id)initFromRow:;
@end
