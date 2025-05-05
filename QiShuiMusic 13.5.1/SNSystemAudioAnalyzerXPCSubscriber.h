@interface SNSystemAudioAnalyzerXPCSubscriber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)removeRequest:;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (BOOL)addRequest:withObserver:error:;
- (void)setAudioConfiguration:;
- (void)xpcAddRequest:withObserver:completionHandler:;
- (void)xpcRemoveRequest:completionHandler:;
- (void)xpcRemoveAllRequestsWithCompletionHandler:;
- (void)xpcSetAudioConfiguration:completionHandler:;
@end
