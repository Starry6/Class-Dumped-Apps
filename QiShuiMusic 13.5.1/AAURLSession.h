@interface AAURLSession : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (id)init;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (id)dataTaskWithRequest:completion:;
- (void)URLSession:task:didCompleteWithError:;
- (id)bodyTaskWithURL:completion:;
- (void)URLSession:didBecomeInvalidWithError:;
- (id)initForProxiedDevice:;
- (id)initForProxiedDevice:anisetteDataProvider:;
- (void)_sessionQueue_updateTask:withData:;
- (id)dataTaskWithURL:completion:;
- (void)resetSessionCache;
- (id)_enqueueRequest:completion:;
- (void).cxx_destruct;
- (void)_sessionQueue_enqueueTask:completion:;
- (id)bodyTaskWithRequest:completion:;
- (void)_sessionQueue_dequeueTask:withResponse:error:;
- (id)_initRequiringSigning:;
- (id)_initRequiringSigning:requiresPinning:;
+ (id)sharedSigningSession;
+ (id)sharedPinningSession;
+ (id)sharedSession;
@end
