@interface GEOPlaceDataProvider : NSObject
@property (nonatomic) BOOL isLoading;
@property (nonatomic) @? finishedHandler;
@property (nonatomic) @? errorHandler;
- (BOOL)isLoading;
- (void)dealloc;
- (id)errorHandler;
- (void)setIsLoading:;
- (void)cancelRequest;
- (void)setErrorHandler:;
- (void).cxx_destruct;
- (id)finishedHandler;
- (void)setFinishedHandler:;
- (void)requestCompleted;
- (void)startRequest:appIdentifier:finished:error:;
- (void)startProviderWithRequest:appIdentifier:;
- (void)cancelProviderRequest;
- (void)providerReceivedResponse:userInfo:;
- (void)providerReceivedErrorCode:userInfo:;
- (void)providerDidCancel;
@end
