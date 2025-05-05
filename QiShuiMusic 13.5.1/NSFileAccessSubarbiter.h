@interface NSFileAccessSubarbiter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)writerWithPurposeID:didChangeUbiquityOfItemAtURL:;
- (id)tiePresenterForID:toItemAtURL:;
- (id)writerWithPurposeID:didMoveItemAtURL:toURL:;
- (void)stopArbitrating;
- (id)writerWithPurposeID:didMakeItemDisappearAtURL:;
- (id)cancelAccessClaimForID:;
- (id)initWithQueue:listener:;
- (id)grantAccessClaim:synchronouslyIfPossible:;
- (id)revokeSubarbitrationClaimForID:;
- (id)writerWithPurposeID:didChangeUbiquityAttributes:ofItemAtURL:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)revokeAccessClaimForID:;
- (id)writerWithPurposeID:didChangeItemAtURL:;
- (id)writerWithPurposeID:didDisconnectItemAtURL:;
- (id)writerWithPurposeID:didReconnectItemAtURL:;
- (id)writerWithPurposeID:didChangeSharingOfItemAtURL:;
- (void)grantSubarbitrationClaim:withServer:;
- (id)writerWithPurposeID:didVersionChangeOfKind:toItemAtURL:withClientID:name:;
@end
