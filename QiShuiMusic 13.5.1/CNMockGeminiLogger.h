@interface CNMockGeminiLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updatingSubscriptionInfo:;
- (void)fetchingBestResultForDestinationHandle:;
- (void)recordedInteraction:forContext:;
- (void)recordInteractionError:;
- (void)registeredForContextUpdatesWithToken:;
- (void)unregisteredForContextUpdatesWithToken:;
- (void)updatedSubscriptionInfo:;
- (void)updateSubscriptionInfoError:;
- (void)fetchedSortedResults:forInteraction:;
- (void)fetchSortedResultsForInteraction:error:;
- (void)fetchedBestResult:forInteraction:;
- (void)fetchBestResultForInteraction:error:;
@end
