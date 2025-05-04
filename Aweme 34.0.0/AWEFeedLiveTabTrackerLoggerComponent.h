@interface AWEFeedLiveTabTrackerLoggerComponent : AWEFeedLiveTabBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParams;
- (void)trackerWithEvent:params:;
- (void)loggerEvent:params:;
- (void)bindService;
- (id)currentUserID;
@end
