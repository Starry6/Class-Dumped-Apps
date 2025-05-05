@interface MPHomeSharingErrorResolver : MPAVErrorResolver
@property (nonatomic) MPHomeSharingML3DataProvider dataProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)dataProvider;
- (void)setDataProvider:;
- (void)request:didFailWithError:;
- (void).cxx_destruct;
- (void)requestDidFinish:;
- (void)resolveError:;
- (void)authorizationRequest:didReceiveResponse:;
- (id)initWithKeybagURL:accountID:accountTokenData:;
- (id)initWithKeybagURL:accountID:accountTokenData:downloaderAccountID:downloaderAccountTokenData:familyAccountID:;
- (BOOL)_errorIsFairPlayError:;
- (void)_performMachineAuthorization;
- (void)_processNextAuthorizationRequest;
@end
