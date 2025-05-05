@interface PPConnectionsStore : NSObject
@property (nonatomic) NSString clientIdentifier;
- (id)init;
- (void)registerFeedback:completion:;
- (void).cxx_destruct;
- (BOOL)iterRecentLocationDonationsSinceDate:client:error:block:;
- (id)forwardingTargetForSelector:;
- (BOOL)iterRecentLocationsForConsumer:criteria:limit:client:error:block:;
- (BOOL)iterRecentLocationsForConsumer:criteria:limit:explanationSet:client:error:block:;
@end
