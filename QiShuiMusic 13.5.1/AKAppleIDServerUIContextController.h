@interface AKAppleIDServerUIContextController : NSObject
@property (nonatomic) AKAppleIDServerResourceLoadDelegate serverUIDelegate;
@property (nonatomic) AKAppleIDServerUIDataHarvester serverDataHarvester;
@property (nonatomic) NSURL initiatingURL;
- (void)processResponse:;
- (void).cxx_destruct;
- (void)signRequest:withCompletionHandler:;
- (void)completeWithError:;
- (void)tearDownContext;
- (id)initWithRequestConfiguration:completion:;
- (BOOL)handleAuthKitActionAttribute:;
- (id)_headerValueFromType:;
- (void)completeWithError:additionalData:;
- (void)completeWithFinalResponse:;
- (void)_completeWithResponse:additionalData:error:;
- (id)serverUIDelegate;
- (id)serverDataHarvester;
- (id)initiatingURL;
@end
