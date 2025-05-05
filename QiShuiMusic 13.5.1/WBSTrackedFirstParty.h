@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty
@property (nonatomic) NSArray trackers;
- (id)initWithDomain:;
- (void).cxx_destruct;
- (id)trackers;
- (void)setTrackers:;
- (id)initWithDomain:trackers:;
@end
