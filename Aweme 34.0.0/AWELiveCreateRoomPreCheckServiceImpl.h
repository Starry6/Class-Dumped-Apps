@interface AWELiveCreateRoomPreCheckServiceImpl : NSObject
@property (nonatomic) @? createRoomBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)convertWith:;
- (BOOL)agreementDone;
- (void)setCreateRoomBlock:;
- (void)useNewCertCompletionWithCertResult:;
- (id)preCheckErrorHandler;
- (void)createRoomRequestHandler:;
- (id)lastFeedVideoID;
- (void)updateAgreementStatus:;
- (void)addObserverForSyncCertificationStatus;
- (id)createRoomBlock;
- (id)init;
- (void).cxx_destruct;
@end
