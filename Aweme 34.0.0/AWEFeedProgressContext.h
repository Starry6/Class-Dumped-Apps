@interface AWEFeedProgressContext : AWEPageContext
@property (nonatomic) NSString referString;
@property (nonatomic) <AWEFeedProgressTrackerProtocol> tracker;
- (id)referString;
- (void)setReferString:;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
- (void)reset;
@end
