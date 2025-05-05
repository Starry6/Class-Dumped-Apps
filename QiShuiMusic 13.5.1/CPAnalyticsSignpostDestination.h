@interface CPAnalyticsSignpostDestination : NSObject
@property (nonatomic) CPAnalytics cpAnalyticsInstance;
@property (nonatomic) NSMutableIndexSet startedSignpostIDs;
@property (nonatomic) BOOL disabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithConfig:;
- (void)_sendCPAnalyticsEvent:withPayload:withDuration:;
- (id)initWithConfig:cpAnalyticsInstance:;
- (void)processEvent:;
- (id)cpAnalyticsInstance;
- (id)startedSignpostIDs;
- (void)_checkSignpostsEndForEvent:;
- (void)setCpAnalyticsInstance:;
- (void).cxx_destruct;
- (void)_trackSignpostsStartForEvent:;
@end
