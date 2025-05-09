@interface NSFilePresenterProxy : NSFileReactorProxy
@property (nonatomic) BOOL disconnected;
@property (nonatomic) BOOL inSubarbiter;
@property (nonatomic) BOOL usesMainThreadDuringReliquishing;
@property (nonatomic) NSSet observedUbiquityAttributes;
@property (nonatomic) Q filePresenterResponses;
- (void)observePresenterChange:atSubitemURL:;
- (void)observeChangeOfUbiquityAttributes:;
- (void)dealloc;
- (void)setFilePresenterResponses:;
- (void)_settleNonCoordinatedChanges;
- (void)disconnect;
- (id)observedUbiquityAttributes;
- (void)forwardUsingProxy:;
- (BOOL)inSubarbiter;
- (void)accommodateDeletionWithSubitemPath:completionHandler:;
- (void)observeDisconnectionByWriterWithPurposeID:;
- (void)forwardRelinquishmentForWritingClaim:withID:purposeID:subitemURL:options:completionHandler:;
- (void)observeMoveOfSubitemAtURL:toURL:byWriterWithPurposeID:;
- (void)promisedFileWasFulfilled;
- (void)observeReconnectionByWriterWithPurposeID:;
- (unsigned long long)filePresenterResponses;
- (void)setUsesMainThreadDuringReliquishing:;
- (void)observeMoveByWriterWithPurposeID:withPhysicalDestinationURL:;
- (id)_clientProxy;
- (BOOL)shouldSendObservationMessageWithPurposeID:;
- (void)saveChangesWithCompletionHandler:;
- (void)startObservingApplicationStateWithQueue:;
- (BOOL)allowedForURL:;
- (BOOL)disconnected;
- (void)relinquishToWritingClaimWithID:options:purposeID:subitemPath:resultHandler:;
- (id)initWithClient:remotePresenter:reactorID:;
- (void)setObservedUbiquityAttributes:;
- (BOOL)usesMainThreadDuringReliquishing;
- (void)observeNewProvider:;
- (void)observeUbiquityChangeAtSubitemPath:withPhysicalURL:;
- (void)observeChangeAtSubitemPath:;
- (void)localFileWasEvicted;
- (void)relinquishToReadingClaimWithID:options:purposeID:resultHandler:;
- (void)stopObservingApplicationState;
- (void)invalidate;
- (void)startWatchingWithQueue:lastEventID:unannouncedMoveHandler:;
- (void)setInSubarbiter:;
- (void)observeSharingChangeAtSubitemPath:withPhysicalURL:;
- (void)observeDisappearanceAtSubitemPath:;
- (void)setItemLocation:;
- (void)observeVersionChangeOfKind:withClientID:name:subitemPath:;
+ (id)urlWithItemURL:subitemPath:;
@end
