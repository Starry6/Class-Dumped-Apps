@interface AKLoginPresenter : NSObject
@property (nonatomic) NSXPCListener remoteListener;
@property (nonatomic) @? presentationCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)remoteListener;
- (void)setRemoteListener:;
- (void)authenticationRequestFinishedWithResults:password:additionalData:error:;
- (void)presentOOPLoginUIWithContext:completion:;
- (void)_callCompletionWithResults:password:additionalData:error:;
- (id)presentationCompletion;
- (void)setPresentationCompletion:;
@end
